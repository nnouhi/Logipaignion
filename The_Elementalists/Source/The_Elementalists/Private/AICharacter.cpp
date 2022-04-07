// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"

#include "BaseGameMode.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// NN Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// NN Create mesh
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(RootComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

    // NN Gas Mask
    GasMask = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gas Mask"));
    GasMask->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("head"));
}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
    // NN Make mask mesh invis at the star of level
    GasMask->SetVisibility(false, true);

    GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAICharacter::SlowDown(float Percentage, float Time)
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

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed * Percentage;

    // CN Reset timer if hit again
    if (GetWorldTimerManager().IsTimerActive(SlowedDownTimerHandle))
    {
        GetWorldTimerManager().ClearTimer(SlowedDownTimerHandle);
    }

    FTimerDelegate SlowedDownTimerDelegate = FTimerDelegate::CreateUObject(
        this,
        &AAICharacter::SpeedUp
    );

    GetWorldTimerManager().SetTimer(
        SlowedDownTimerHandle,
        SlowedDownTimerDelegate,
        Time,
        false
    );
}

void AAICharacter::SpeedUp()
{
    // CN Restore Materials
    for (int32 i = 0; i < Materials.Num(); i++)
    {
        GetMesh()->SetMaterial(i, Materials[i]);
    }

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AAICharacter::EquipMask()
{
    if (!bMaskEquipped)
    {
        // NN 'Equip' mask
        bMaskEquipped = true;
        GasMask->SetVisibility(true, true);
        GameMode->ActorDied(this);
    }
}

