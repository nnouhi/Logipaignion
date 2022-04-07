// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AICharacter.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// CN Points awarded when saving the AI
	UPROPERTY(EditAnywhere)
		int32 PointsAwarded = 100;

	class ABaseGameMode* GameMode;

	bool bMaskEquipped = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Slow AI down
	void SlowDown(float Percentage, float Time);

	// Set speed back to normal
	void SpeedUp();

	FORCEINLINE int32 GetPointsAwarded() { return PointsAwarded; };

	UPROPERTY(EditAnywhere)
	UMaterial* Oil;

	TArray<UMaterialInterface*> Materials;

	FTimerHandle SlowedDownTimerHandle;

	UPROPERTY(EditAnywhere)
	float WalkSpeed = 200.f;

	void EquipMask();

private:

	// NN SkeletalMesh to add to every npc 
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* GasMask;



};
