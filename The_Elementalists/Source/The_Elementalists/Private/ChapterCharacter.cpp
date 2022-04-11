// Fill out your copyright notice in the Description page of Project Settings.


#include "ChapterCharacter.h"
#include "Components/CapsuleComponent.h"
#include "BaseGameMode.h"
#include "Camera/CameraComponent.h"
#include "Chapter_PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "SwingDoor.h"
#include "Blueprint/UserWidget.h" 
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HealthComponent.h"
#include "InteractableItem.h"
#include "Projectile.h"
#include "FloorCollider.h"
#include "Particles/ParticleSystemComponent.h"
#include "GasMaskBox.h"
#include "AICharacter.h"
#include "Chapter2_AIController.h"
#include "Chapter2InsideHouse_AIController.h"
//#include "DrawDebugHelpers.h"

// Sets default values
AChapterCharacter::AChapterCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // NN Instantiating class components
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));

    // NN Attaching your class Components to the default character's Skeletal Mesh Component.
    SpringArmComp->SetupAttachment(GetMesh());
    ThirdPersonCamera->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    // NN Setting class variables for SpringArm
    SpringArmComp->TargetArmLength = 150.f; // The camera follows at this distance behind the character	
    SpringArmComp->bUsePawnControlRotation = true; // Rotate the arm based on the controller

    // NN Setting class variables for the Camera
    ThirdPersonCamera->bUsePawnControlRotation = false; // Don't rotate the camera based

    //const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName("Muzzle_01");

    ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    ProjectileSpawnPoint->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Muzzle_01"));
    ProjectileSpawnPoint->SetRelativeLocation(FVector(50.f, 0.f, 0.f));

    // CN Add gas particles on head
    GasParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
    GasParticles->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("head"));

    // CN Create health component
    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
    AddOwnedComponent(HealthComponent);

    CurrentDoor = NULL;
    CurrentItem = NULL;
    GasMaskBox = NULL;
    AICharacter = NULL;
    
}

// Called when the game starts or when spawned
void AChapterCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AChapterCharacter::OnOverlapBegin);

    PlayerControllerRef = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

    RemoveGasParticles();

}

// Called every frame
void AChapterCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bPerformLineTrace)
    {
        PerformLineTrace();
    }
    else
    {
        if (PlayerControllerRef)
        {
            PlayerControllerRef->HideInfoWidget();
        }
    }

	// CN Heal gradually if medkit picked up
	CheckAndHeal(DeltaTime);

    // CN Apply DPS
    if (bTakeDPS)
    {
        if (IsDead() && !bDied)
        {
            bDied = true;
            ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
            if (GameMode)
            {
                GameMode->ActorDied(this);
            }
        }
            
        HealthComponent->Health -= DeltaTime * DamagePerSecond;
    }
}

// Called to bind functionality to input
void AChapterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AChapterCharacter::MoveForward);
    PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
    PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AChapterCharacter::MoveRight);
    PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);


    PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AChapterCharacter::FireButtonPressed);
    PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Released, this, &AChapterCharacter::FireButtonReleased);
    PlayerInputComponent->BindAction(TEXT("Action"), EInputEvent::IE_Pressed, this, &AChapterCharacter::OnAction);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AChapterCharacter::BeginSprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AChapterCharacter::EndSprint);
    PlayerInputComponent->BindAction("DisplayMap", IE_Pressed, this, &AChapterCharacter::CallDisplayMap);
    PlayerInputComponent->BindAction("DisplayMap", IE_Released, this, &AChapterCharacter::CallRemoveMap);
    PlayerInputComponent->BindAction(TEXT("Pause"), EInputEvent::IE_Pressed, this, &AChapterCharacter::Pause);
}

void AChapterCharacter::Pause()
{
    if (PlayerControllerRef)
    {
        PlayerControllerRef->Pause(); // CN Pause in controller handles pausing/unpausing
    }
}

void AChapterCharacter::MoveForward(float AxisValue)
{
    AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AChapterCharacter::MoveRight(float AxisValue)
{
    AddMovementInput(GetActorRightVector() * AxisValue);
}

void AChapterCharacter::BeginSprint()
{
   /* GetCharacterMovement()->MaxWalkSpeed = 1000.f;*/
    if (bCanSprint)
    {
        GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
    }
}

void AChapterCharacter::EndSprint()
{
    /*GetCharacterMovement()->MaxWalkSpeed = 600.f;*/
    if (bCanSprint)
    {
        GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
    }
}

void AChapterCharacter::PerformLineTrace()
{
    FHitResult hit;
    FVector Start = ThirdPersonCamera->GetComponentLocation();

    FVector ForwardVector = ThirdPersonCamera->GetForwardVector();
    FVector End = (ForwardVector * LineTraceDistance) + Start;

    // DrawDebugLine(GetWorld(), Start, End, FColor::Blue,1); //debug

    if (GetWorld()->LineTraceSingleByChannel(hit, Start, End, ECC_Visibility))
    {
        if (hit.bBlockingHit && hit.GetActor())
        {
            /*UE_LOG(LogTemp, Warning, TEXT("%s"), *hit.GetActor()->GetName());*/
            /* NN If actor is a door ..
            (NOTE: Will have to extend later to hit a Hint actor as well,
            Maybe another line trace method?) 
            */
            if (hit.GetActor()->GetClass()->IsChildOf(ASwingDoor::StaticClass())) 
            {
                CurrentDoor = Cast<ASwingDoor>(hit.GetActor());
                if (CurrentDoor->bReadyState) // NN Door hasn't been opened yet
                {
                    PlayerControllerRef->DisplayInfoWidget();
                }
            }
            // CN Check if actor is interactable item
            else if (hit.GetActor()->GetClass()->IsChildOf(AInteractableItem::StaticClass()))
            {
                CurrentItem = Cast<AInteractableItem>(hit.GetActor());
                if (CurrentItem) {
                    PlayerControllerRef->DisplayInfoWidget();
                }
            }
            // CN Check if actor is gas mask box
            else if (hit.GetActor()->GetClass()->IsChildOf(AGasMaskBox::StaticClass()))
            {
                GasMaskBox = Cast<AGasMaskBox>(hit.GetActor());
                if (GasMaskBox) {
                    PlayerControllerRef->DisplayInfoWidget();
                }
            }
            // NN Check if hit actor is AI (only check if player obtained the masks from factory)
            else if (hit.GetActor()->GetClass()->IsChildOf(AAICharacter::StaticClass()) && bMaskObtained)
            {
                AICharacter = Cast<AAICharacter>(hit.GetActor());
                if (AICharacter) {
                    // NOTE: Not sure if needed to display ask chris
                    PlayerControllerRef->DisplayInfoWidget();
                   
                }
                
            }
        }
    }
    else
    {
        PlayerControllerRef->HideInfoWidget();
        CurrentDoor = NULL;
        CurrentItem = NULL;
        GasMaskBox = NULL;
        bPerformLineTrace = false;
    }
}

void AChapterCharacter::OnAction()
{
    if (CurrentDoor)
    {
        CurrentDoor->OpenDoor();
    }
    else if (CurrentItem)
    {
        // UE_LOG(LogTemp, Warning, TEXT("Interacted"));
        CurrentItem->Interact();
    }
    else if (GasMaskBox)
    {
        GasMaskBox->Interact();
        bMaskObtained = true;
    }
    else if (AICharacter)
    {
        // NN Equip mask and disable line tracing for performance
        if (Cast<AChapter2_AIController>(AICharacter->GetController()))
        {
            Cast<AChapter2_AIController>(AICharacter->GetController())->DisableLineTrace();
        }
        else if (Cast<AChapter2InsideHouse_AIController>(AICharacter->GetController()))
        {
            Cast<AChapter2InsideHouse_AIController>(AICharacter->GetController())->DisableLineTrace();
        }
        AICharacter->EquipMask();
    }
}

void AChapterCharacter::FireButtonPressed()
{
    bFireButtonPressed = true;
    StartFireTimer();
}

void AChapterCharacter::FireButtonReleased()
{
    bFireButtonPressed = false;
}

void AChapterCharacter::StartFireTimer()
{
    if (bShouldFire)
    {
        bShouldFire = false;
        Shoot();
        GetWorldTimerManager().SetTimer(
            AutoFireTimer,
            this,
            &AChapterCharacter::AutoFireReset,
            AutomaticFireRate
        );
    }
}

void AChapterCharacter::AutoFireReset()
{
    bShouldFire = true;

    if (bFireButtonPressed)
    {
        StartFireTimer();
    }
}

void AChapterCharacter::CallDisplayMap()
{
    // CN Clear the new objective message
    ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->ClearSignalObjective();
    }

    if (PlayerControllerRef)
    {
        PlayerControllerRef->DisplayMap();
    }
}

void AChapterCharacter::CallRemoveMap()
{

    if (PlayerControllerRef)
    {
        PlayerControllerRef->RemoveMap();
    }
}

void AChapterCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
 
   //  NN Used only in chapter 3 for now; when the player collides with the floor he drowns (killed)
    if (OtherActor->GetComponentByClass(UFloorCollider::StaticClass()))
    {
        AController* MyOwnerInstigator = GetInstigatorController();
        UClass* DamageTypeClass = UDamageType::StaticClass();
        UGameplayStatics::ApplyDamage(this, 100.f, MyOwnerInstigator, this, DamageTypeClass);

    }
}

bool AChapterCharacter::IsDead() const
{
    if (HealthComponent)
    {
        return HealthComponent->Health <= 0.f;
    }
    return false;
}

float AChapterCharacter::GetHealthPercentage() const
{
    if (HealthComponent)
    {
        return HealthComponent->GetHealthPercentage();
    }
    return 0.f;
}

void AChapterCharacter::Shoot()
{
    if (ProjectileSpawnPoint)
    {
        // CN Get spawner location
        FVector ProjectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
        FRotator ProjectileSpawnPointRotation = ProjectileSpawnPoint->GetComponentRotation();

        if (ProjectileClass)
        {
            AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPointLocation, ProjectileSpawnPointRotation);
            Projectile->SetOwner(this); // set the owner to the actor that fired it
        }
    }
}

void AChapterCharacter::Heal(float Amount)
{
	if (HealthComponent)
	{
		// CN Check for and play heal sound
		
		// CN Setup healing to take place in Tick()
		HealthToReach = FMath::Min(HealthComponent->Health + Amount, HealthComponent->MaxHealth);
		bIsHealing = true;
	}
}

void AChapterCharacter::CheckAndHeal(float DeltaTime)
{
	// CN Heal gradually
	if (bIsHealing)
	{
		if (HealthComponent && HealthComponent->Health < HealthToReach)
		{
			HealthComponent->Health += DeltaTime * HealingPerSecond;
		}
		else 
		{
			bIsHealing = false;
		}
	}
}

void AChapterCharacter::SlowDown(float Percentage, float Time)
{

    // CN Get the materials
    if (Materials.Num() <= 0)
    {
        Materials = GetMesh()->GetMaterials();
    }
    // CN Set material to oil
    if (Oil)
    {
        for (int32 i = 0; i < Materials.Num(); i++)
        {
            GetMesh()->SetMaterial(i, Oil);
        }
    }

    if (bCanSprint)
    {
        GetCharacterMovement()->MaxWalkSpeed = WalkSpeed * Percentage;
        SetCanSprint(false);
    }

    // CN Reset timer if hit again
    if (GetWorldTimerManager().IsTimerActive(SlowedDownTimerHandle))
    {
        GetWorldTimerManager().ClearTimer(SlowedDownTimerHandle);
    }

    FTimerDelegate SlowedDownTimerDelegate = FTimerDelegate::CreateUObject(
        this,
        &AChapterCharacter::SpeedUp
    );

    GetWorldTimerManager().SetTimer(
        SlowedDownTimerHandle,
        SlowedDownTimerDelegate,
        Time,
        false
    );
}

void AChapterCharacter::SpeedUp()
{
    // CN Restore Materials
    for (int32 i = 0; i < Materials.Num(); i++)
    {
        GetMesh()->SetMaterial(i, Materials[i]);
    }

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
    SetCanSprint(true);
}

void AChapterCharacter::AddGasParticles(float Time, float Damage)
{
    // CN Show particles
    if (GasParticles)
    {
        GasParticles->SetVisibility(true, true);
    }

    bTakeDPS = true;
    DamagePerSecond = Damage * 0.4f;

    // CN Reset timer if hit again
    if (GetWorldTimerManager().IsTimerActive(GasTimerHandle))
    {
        GetWorldTimerManager().ClearTimer(GasTimerHandle);
    }

    GetWorldTimerManager().SetTimer(
        GasTimerHandle,
        this,
        &AChapterCharacter::RemoveGasParticles,
        Time,
        false
    );
}

void AChapterCharacter::RemoveGasParticles()
{
    bTakeDPS = false;

    if (GasParticles)
    {
        GasParticles->SetVisibility(false, true);
    }
}
