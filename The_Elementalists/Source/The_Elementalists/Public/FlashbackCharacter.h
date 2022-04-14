// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FlashbackCharacter.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AFlashbackCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFlashbackCharacter();

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

public:	

	UFUNCTION(BlueprintPure)
	float GetHealthPercentage() const;

	// CN Pause/Resume the game
	void Pause();

	UFUNCTION(BlueprintCallable)
	void ChangeSensitivity();

private:

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

	 // NN Sensitivity for mouse Y, can be adjusted from editor
	UPROPERTY(EditAnywhere)
	float LookUpSensitivity;

	// NN Sensitivity for mouse X, can be adjusted from editor
	UPROPERTY(EditAnywhere)
	float TurnSensitivity;

	class UHealthComponent* HealthComponent;

	// NN invokes player controller DisplayMap method
	void CallDisplayMap();
	
	// NN invokes player controller RemoveMap method
	void CallRemoveMap();

	
};
