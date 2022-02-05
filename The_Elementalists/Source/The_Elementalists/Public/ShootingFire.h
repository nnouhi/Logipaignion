// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fire.h"
#include "ShootingFire.generated.h"


UCLASS()
class THE_ELEMENTALISTS_API AShootingFire : public AFire
{
    GENERATED_BODY()

public:
    // Sets default values for properties
    AShootingFire();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:

    virtual void BeginPlay() override;

    void Shoot();

private:

    bool InShootingRange() const;

    UPROPERTY(EditAnywhere)
    USceneComponent* ProjectileSpawnPoint;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class AProjectile> ProjectileClass;

    UPROPERTY(EditAnywhere)
    float ShootingRange = 400.f;

    FTimerHandle ShootingRateTimerHandle;

    UPROPERTY(EditDefaultsOnly)
    float ShootingRate = 2.f;

    UPROPERTY(EditAnywhere)
    float LaunchAngle = 30.f;
};
