// Fill out your copyright notice in the Description page of Project Settings.


#include "ChapterCharacter.h"

#include "BaseGameMode.h"
#include "Camera/CameraComponent.h"
#include "Chapter_PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "SwingDoor.h"
#include "DrawDebugHelpers.h"
#include "Blueprint/UserWidget.h" 
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HealthComponent.h"
#include "InteractableItem.h"
#include "Projectile.h"

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

    // CN Create health component
    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
    AddOwnedComponent(HealthComponent);

    CurrentDoor = NULL;
    CurrentItem = NULL;
}

// Called when the game starts or when spawned
void AChapterCharacter::BeginPlay()
{
    Super::BeginPlay();

    PlayerControllerRef = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
 
}

// Called every frame
void AChapterCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);



    /*UE_LOG(LogTemp, Warning, TEXT("%d"), bPerformLineTrace);*/
   /* UE_LOG(LogTemp, Warning, TEXT("Location X: %f, Y: %f, Z: %f"), GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z);*/

    if (bPerformLineTrace)
    {
        PerformLineTrace();
    }
    else
    {
        PlayerControllerRef->HideInfoWidget();
    }

	// CN Heal gradually if medkit picked up
	CheckAndHeal(DeltaTime);
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
    GetCharacterMovement()->MaxWalkSpeed = 1000.f;
}

void AChapterCharacter::EndSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void AChapterCharacter::PerformLineTrace()
{
    FHitResult hit;
    FVector Start = ThirdPersonCamera->GetComponentLocation();

    FVector ForwardVector = ThirdPersonCamera->GetForwardVector();
    FVector End = (ForwardVector * LineTraceDistance) + Start;

    DrawDebugLine(GetWorld(), Start, End, FColor::Blue,1); //debug

    if (GetWorld()->LineTraceSingleByChannel(hit, Start, End, ECC_Visibility))
    {
        if (hit.bBlockingHit)
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
        }
    }
    else
    {
        PlayerControllerRef->HideInfoWidget();
        CurrentDoor = NULL;
        CurrentItem = NULL;
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
        UE_LOG(LogTemp, Warning, TEXT("Interacted"));
        CurrentItem->Interact();
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