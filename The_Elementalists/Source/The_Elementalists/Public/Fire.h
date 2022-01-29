// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fire.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AFire : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFire();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // CN Character reference
    class AFlashbackCharacter* FlashbackCharacter;

    bool bHasExploded = false;

    // CN Root
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles;

    UPROPERTY(EditAnywhere)
    class UParticleSystem* ExplosionParticles;

    UPROPERTY(EditAnywhere)
    TSubclassOf<class UCameraShakeBase> HitCameraShakeClass;

    UPROPERTY(EditAnywhere)
    float ExplosionDistance = 500.f;

    UPROPERTY(EditAnywhere)
    float DamageDistance = 100.f;

    UPROPERTY(EditAnywhere)
    float DamagePerSecond = 10.f;

    UPROPERTY(EditAnywhere)
    int32 ExplosionChance = 3;

    UPROPERTY(EditAnywhere)
    class USoundBase* RandomizedExplosion;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:


};