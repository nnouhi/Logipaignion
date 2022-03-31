// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ToxicGas.h"
#include "ShootingToxicGas.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AShootingToxicGas : public AToxicGas
{
	GENERATED_BODY()

public:
	AShootingToxicGas();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE void SetProjectileDamage(float NewDamage) { ProjectileDamage = NewDamage; };

protected:

	virtual void BeginPlay() override;

	void Shoot();

	UPROPERTY(EditAnywhere)
		float LaunchAngle = 30.f;

private:

	bool InShootingRange() const;

	UPROPERTY(EditAnywhere)
		USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere)
		float ShootingRange = 400.f;

	// CN Used to change the projectile damage
	float ProjectileDamage = 10.f;

	FTimerHandle ShootingRateTimerHandle;

	UPROPERTY(EditDefaultsOnly)
		float ShootingRate = 2.f;
};

