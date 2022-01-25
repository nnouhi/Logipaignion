// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireWall.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AFireWall : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFireWall();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    // CN Particle Components
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles1;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles2;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles3;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles4;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles5;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles6;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles7;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles8;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles9;
    UPROPERTY(VisibleAnywhere)
    class UParticleSystemComponent* FireParticles10;

    // CN Collision box
    UPROPERTY(EditAnywhere)
    class UBoxComponent* Box;

    // CN Root
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    // CN Fire speed. I beleive 100 is fine.
    UPROPERTY(EditAnywhere)
    float Speed = 100.f;

    // CN Handles collision with pawn
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
