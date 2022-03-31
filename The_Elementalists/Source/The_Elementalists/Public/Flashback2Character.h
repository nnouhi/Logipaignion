// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Flashback2Character.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AFlashback2Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFlashback2Character();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return FirstPersonCameraComponent; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/**NN Handles moving forward/backward */
	void MoveForward(float Value);

	/**NN Handles stafing movement, left and right */
	void MoveRight(float Value);

	/*
	*Called via input to turn at a given rate.
	*@param Rate this is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void TurnAtRate(float Rate);

	/*
	*Called via input to look up/down at a given rate.
	*@param Rate this is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void LookUpAtRate(float Rate);

	/*NN Changes MaxWalkSpeed variable to 1000.f*/
	virtual void BeginSprint();

	/*NN Changes MaxWalkSpeed variable back to 600.f (default)*/
	virtual void EndSprint();

	/*NN Request for Character to Crouch*/
	void BeginCrouch();

	/*NN Request for Character to EndCrouch*/
	void EndCrouch();

	UPROPERTY(EditAnywhere)
		float SprintSpeed = 500.f;

	UPROPERTY(EditAnywhere)
		float WalkSpeed = 300.f;

	void OnAction();

	// CN Line trace distance for interaction with mask
	UPROPERTY(EditAnywhere)
		float LineTraceDistance = 200.f;

	UPROPERTY(EditAnywhere)
		USoundBase* CoughSound;

public:

	// CN Performs line trace for gas mask
	void PerformLineTrace();

	UFUNCTION(BlueprintPure)
		float GetHealthPercentage() const;

	bool bPerformLineTrace = false;

	class AFlashback_PlayerController* PlayerControllerRef;

	FORCEINLINE bool IsWearingMask() { return bIsWearingMask; };

	void Cough();

	void Blur();

	void UnBlur();

	bool IsCoughing();

private:

	bool bIsCoughing = false;

	FTimerHandle CoughingTimerHandle;

	UPROPERTY(EditAnywhere)
	float CoughingTime = 3.f;

	void StopCoughing();

	class ABaseGameMode* GameMode;

	// CN For line trace with mask
	class AGasMask* GasMask = NULL;

	bool bIsWearingMask = false;

	//// NN SpringArm Component
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class USpringArmComponent* SpringArmComp;

	///*NN USceneCaptureComponent to act like Minimap */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class USceneCaptureComponent2D* Minimap;

	/*NN First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FirstPersonCameraComponent;

	///** Pawn mesh: 1st person view (arms; seen only by self) */
	//UPROPERTY(VisibleDefaultsOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	//class USkeletalMeshComponent* Mesh1P;

	/*NN Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		float BaseTurnRate;

	/*NN Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		float BaseLookUpRate;

	class UHealthComponent* HealthComponent;

	// NN invokes player controller DisplayMap method
	void CallDisplayMap();

	// NN invokes player controller RemoveMap method
	void CallRemoveMap();

};
