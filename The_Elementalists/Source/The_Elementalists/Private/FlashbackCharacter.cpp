// Fill out your copyright notice in the Description page of Project Settings.


#include "FlashbackCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AFlashbackCharacter::AFlashbackCharacter():
	/*NN initialize base rates */
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*NN Set size for collision capsule*/
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	/*NN Create a the CameraComponent */
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;	/*NN rotate camera relative to controller rotation */

	/*NN Create a mesh component that will be maybe used */
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	/*NN enabling crouching for Character */
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true; //set to true to enable crouching(false by default)
}

// Called when the game starts or when spawned
void AFlashbackCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFlashbackCharacter::MoveForward(float Value)
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

void AFlashbackCharacter::MoveRight(float Value)
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

void AFlashbackCharacter::TurnAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AFlashbackCharacter::LookUpAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AFlashbackCharacter::BeginSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 1000.f;
}

void AFlashbackCharacter::EndSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void AFlashbackCharacter::BeginCrouch()
{
	Crouch(); //NN in-built character method
}

void AFlashbackCharacter::EndCrouch()
{
	UnCrouch(); //NN in-built character method
}

// Called every frame
void AFlashbackCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFlashbackCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*NN Axis mappings */
	PlayerInputComponent->BindAxis("MoveForward", this, &AFlashbackCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFlashbackCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFlashbackCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFlashbackCharacter::LookUpAtRate);

	/*NN Action mappings */
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFlashbackCharacter::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AFlashbackCharacter::EndSprint);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AFlashbackCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AFlashbackCharacter::EndCrouch);

}

