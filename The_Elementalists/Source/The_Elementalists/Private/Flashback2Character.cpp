// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashback2Character.h"
#include "BaseGameMode.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"
#include "Flashback_PlayerController.h"
#include "GasMask.h"


// Sets default values
AFlashback2Character::AFlashback2Character()
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


	/*NN Modify character's movement component */
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true; //set to true to enable crouching(false by default)
	/*GetCharacterMovement()->MaxWalkSpeed = 300.f;*/

	// CN Create health component
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	AddOwnedComponent(HealthComponent);

}

// Called when the game starts or when spawned
void AFlashback2Character::BeginPlay()
{
	Super::BeginPlay();
	GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	PlayerControllerRef = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	ChangeSensitivity();

}

void AFlashback2Character::MoveForward(float Value)
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

void AFlashback2Character::MoveRight(float Value)
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

void AFlashback2Character::TurnAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerYawInput(Rate * TurnSensitivity * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AFlashback2Character::LookUpAtRate(float Rate)
{
	/*NN Calculate delta for this frame from the rate information */
	AddControllerPitchInput(Rate * LookUpSensitivity * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame = deg/frame
}

void AFlashback2Character::BeginSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void AFlashback2Character::EndSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AFlashback2Character::BeginCrouch()
{
	Crouch(); //NN in-built character method
}

void AFlashback2Character::EndCrouch()
{
	UnCrouch(); //NN in-built character method
}

float AFlashback2Character::GetHealthPercentage() const
{
	if (HealthComponent)
	{
		return HealthComponent->Health / HealthComponent->MaxHealth;
	}
	return 0.f;
}

void AFlashback2Character::CallDisplayMap()
{
	if (GameMode)
	{
		GameMode->ClearSignalObjective();
	}

	if (PlayerControllerRef)
	{
		PlayerControllerRef->DisplayMap();
	}
}

void AFlashback2Character::CallRemoveMap()
{
	if (PlayerControllerRef)
	{
		PlayerControllerRef->RemoveMap();
	}
}

void AFlashback2Character::OnAction()
{
	if (GasMask)
	{
		if (PlayerControllerRef)
		{
			PlayerControllerRef->WearMask();
			// NN Change obj message
			GameMode->MaskObtained();
			bIsWearingMask = true;
		}
		GasMask->Destroy();
	}
}

// Called every frame
void AFlashback2Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPerformLineTrace)
	{
		PerformLineTrace();
	}
	else
	{
		PlayerControllerRef->HideInfoWidget();
	}
}



// Called to bind functionality to input
void AFlashback2Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*NN Axis mappings */
	PlayerInputComponent->BindAxis("MoveForward", this, &AFlashback2Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFlashback2Character::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFlashback2Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFlashback2Character::LookUpAtRate);

	/*NN Action mappings */
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFlashback2Character::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AFlashback2Character::EndSprint);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AFlashback2Character::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AFlashback2Character::EndCrouch);
	PlayerInputComponent->BindAction("DisplayMap", IE_Pressed, this, &AFlashback2Character::CallDisplayMap);
	PlayerInputComponent->BindAction("DisplayMap", IE_Released, this, &AFlashback2Character::CallRemoveMap);
	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &AFlashback2Character::OnAction);
	PlayerInputComponent->BindAction(TEXT("Pause"), EInputEvent::IE_Pressed, this, &AFlashback2Character::Pause);
}

void AFlashback2Character::Pause()
{
	if (PlayerControllerRef)
	{
		PlayerControllerRef->PauseMenu();
	}
}

void AFlashback2Character::PerformLineTrace()
{
	FHitResult hit;
	FVector Start = FirstPersonCameraComponent->GetComponentLocation();

	FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
	FVector End = (ForwardVector * LineTraceDistance) + Start;

	// DrawDebugLine(GetWorld(), Start, End, FColor::Blue,1); //debug

	if (GetWorld()->LineTraceSingleByChannel(hit, Start, End, ECC_Visibility))
	{
		if (hit.bBlockingHit)
		{
			// CN Check if actor is gas mask
			if (hit.GetActor()->GetClass()->IsChildOf(AGasMask::StaticClass()))
			{
				PlayerControllerRef->DisplayInfoWidget();
				GasMask = Cast<AGasMask>(hit.GetActor());
			}
		}
	}
	else
	{
		PlayerControllerRef->HideInfoWidget();
		bPerformLineTrace = false;
		GasMask = NULL;
	}
}

void AFlashback2Character::Cough()
{
	if (CoughSound)
	{
		bIsCoughing = true;
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), CoughSound, GetActorLocation());
		GetWorldTimerManager().SetTimer(
			CoughingTimerHandle,
			this,
			&AFlashback2Character::StopCoughing,
			CoughingTime,
			false // loop
		);
	}
}

void AFlashback2Character::StopCoughing()
{
	bIsCoughing = false;
}

bool AFlashback2Character::IsCoughing()
{
	return bIsCoughing;
}

void AFlashback2Character::ChangeSensitivity()
{
	if (GameMode)
	{
		TurnSensitivity = GameMode->GetBaseTurnRate();
		LookUpSensitivity = TurnSensitivity;
	}
}

void AFlashback2Character::Blur()
{
	if (PlayerControllerRef)
	{
		PlayerControllerRef->Blur();
	}
}

void AFlashback2Character::UnBlur()
{
	if (PlayerControllerRef)
	{
		PlayerControllerRef->UnBlur();
	}
}