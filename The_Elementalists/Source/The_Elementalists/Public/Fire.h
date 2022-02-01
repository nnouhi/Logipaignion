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

    void PlayHitSound();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // CN Character reference
    class ACharacter* PlayerCharacter;

    bool bHasExploded = false;

    // CN Root
    UPROPERTY(EditAnywhere)
    USceneComponent* Root;

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* CollisionMesh;

    UPROPERTY(EditAnywhere)
    class UParticleSystemComponent* FireParticles;

    UPROPERTY(EditAnywhere)
    class UParticleSystem* ExplosionParticles;

    UPROPERTY(EditAnywhere)
    UParticleSystem* DeathParticles;

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
    float BaseScale = 2.f;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    // CN Deal damage to player
    void DealDamage(float DeltaTime);
    // CN Explodes
    void Explode();

    // CN The health of the fire
    UPROPERTY(EditAnywhere)
    class UHealthComponent* HealthComponent;

  
    UPROPERTY(EditAnywhere)
    class USoundBase* RandomizedExplosion;

    UPROPERTY(EditAnywhere)
    USoundBase* RandomizedFireHit;
    
    float Scale;
};