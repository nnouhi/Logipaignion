// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AProjectile : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AProjectile();

    UPROPERTY(EditAnywhere)
    class UProjectileMovementComponent* ProjectileMovementComponent;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* ProjectileMesh;

    UPROPERTY(EditAnywhere)
    class UParticleSystemComponent* Particles;

    UPROPERTY(EditAnywhere)
    float Damage = 10.f;

    UFUNCTION()
    virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    UPROPERTY(EditAnywhere)
    class UParticleSystem* HitParticles;

    UPROPERTY(EditAnywhere)
    USoundBase* LaunchSound;

    UPROPERTY(EditAnywhere)
    USoundBase* HitSound;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

   
};
