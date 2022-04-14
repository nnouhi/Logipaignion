// Fill out your copyright notice in the Description page of Project Settings.


#include "JournalistCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BaseGameMode.h"
#include "Kismet/Gameplaystatics.h"

// Sets default values
AJournalistCharacter::AJournalistCharacter() 
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*NN Set size for collision capsule*/
	GetCapsuleComponent()->InitCapsuleSize(15.0f, 120.0f);

	/*NN Create a the CameraComponent */
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 180.f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;	/*NN rotate camera relative to controller rotation */

	//// NN Create USceneCaptureComponent
	//Minimap = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Minimap"));
	//Minimap->SetupAttachment(SpringArmComp);

	/*NN Create a mesh component that will be maybe used */
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	/*NN Modify character's movement component */
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true; //set to true to enable crouching(false by default)
	GetCharacterMovement()->MaxWalkSpeed = 300.f;


	ChangeSensitivity();
}

// Called when the game starts or when spawned
void AJournalistCharacter::BeginPlay()
{
	Super::BeginPlay();


	GameModeReference = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	ChangeSensitivity();
}

void AJournalistCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(Direction, Value);
	}
}

void AJournalistCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is Right
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y) };
		AddMovementInput(Direction, Value);
	}
}

void AJournalistCharacter::TurnAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerYawInput(Rate * TurnSensitivity * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AJournalistCharacter::LookUpAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerPitchInput(Rate * LookUpSensitivity * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AJournalistCharacter::BeginSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
}

void AJournalistCharacter::EndSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
}

// Called every frame
void AJournalistCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



// Called to bind functionality to input
void AJournalistCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*NN Axis mappings */
	PlayerInputComponent->BindAxis("MoveForward", this, &AJournalistCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AJournalistCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AJournalistCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AJournalistCharacter::LookUpAtRate);

	/*NN Action mappings */
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AJournalistCharacter::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AJournalistCharacter::EndSprint);
}

void AJournalistCharacter::ChangeSensitivity()
{
	if (GameModeReference)
	{
		TurnSensitivity = GameModeReference->GetBaseTurnRate();
		LookUpSensitivity = TurnSensitivity;
	}
}
