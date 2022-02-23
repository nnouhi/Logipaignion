// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FlashbackCharacter.h"
#include "GameFramework/Character.h"
#include "Boat.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API ABoat : public AFlashbackCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABoat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// CN Disable sprinting
	FORCEINLINE void BeginSprint() override {};
	FORCEINLINE void EndSprint() override {};

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// NN Make boat slow down
	void SlowDown(float Percentage/*, float Time*/);

	// NN Reset speed
	void SpeedUp();


private:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BoatMesh;
	
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* FPSCamera;
};
