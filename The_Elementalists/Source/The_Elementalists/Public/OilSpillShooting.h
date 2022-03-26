// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OilSpill.h"
#include "OilSpillShooting.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AOilSpillShooting : public AOilSpill
{
	GENERATED_BODY()
public:
    // Sets default values for properties
    AOilSpillShooting();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    FORCEINLINE void SetProjectileDamage(float NewDamage) { ProjectileDamage = NewDamage; };
    
    void Freeze();

protected:

    virtual void BeginPlay() override;

    void Shoot();

private:

    bool InShootingRange();

    // CN To check if is frozen
    bool bIsFrozen = false;

    // CN Player pawn reference
    ACharacter* PlayerCharacter;

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

    UPROPERTY(EditAnywhere)
    float LaunchAngle = 30.f;

    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* FreezeMaterial;

    FString MapName;

    TArray<AActor*> Characters;

    float ClosestDist = 1000000.f;

};
