// Fill out your copyright notice in the Description page of Project Settings.


#include "Boat.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABoat::ABoat()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    BoatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boat Mesh"));
    BoatMesh->SetupAttachment(RootComponent);

    MinimapArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MinimapArm"));
    MinimapArm->SetupAttachment(BoatMesh);

    Minimap = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Minimap"));
    Minimap->SetupAttachment(MinimapArm);

    SittingMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SittingMesh1"));
    SittingMesh1->SetupAttachment(RootComponent);

    SittingMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SittingMesh2"));
    SittingMesh2->SetupAttachment(RootComponent);

    SittingMesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SittingMesh3"));
    SittingMesh3->SetupAttachment(RootComponent);

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComponent->SetupAttachment(BoatMesh);

    FPSCamera = GetCameraComponent();
    FPSCamera->SetupAttachment(SpringArmComponent);
    

    // NN Destroy skeletal mesh not needed here
    GetMesh()->DestroyComponent();
    GetMesh()->SetActive(false);
    /*GetCapsuleComponent()->DestroyComponent();
    GetCapsuleComponent()->SetActive(false);*/

    GetCharacterMovement()->bOrientRotationToMovement = true;
    SpringArmComponent->bUsePawnControlRotation = true;
    FPSCamera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ABoat::BeginPlay()
{
	Super::BeginPlay();
	
    // NN Boat can't sprint
	SprintSpeed = WalkSpeed;
}

// Called every frame
void ABoat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoat::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABoat::SlowDown(float Percentage/*, float Time*/)
{
    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed * Percentage;

    // CN Set timer to reset again
    FTimerHandle SlowedDownTimerHandle;
    FTimerDelegate SlowedDownTimerDelegate = FTimerDelegate::CreateUObject(
        this,
        &ABoat::SpeedUp
    );

}

void ABoat::SpeedUp()
{
    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

