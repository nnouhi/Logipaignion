// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ChapterCharacter.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AChapterCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AChapterCharacter();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // CN Shoot
    void Shoot();

    // CN To check if player is dead
    UFUNCTION(BlueprintPure)
        bool IsDead() const;

    // CN Get players health percentage
    UFUNCTION(BlueprintPure)
        float GetHealthPercentage() const;

private:
    // CN Move forwards/backwards
    void MoveForward(float AxisValue);
    // CN Move left/right
    void MoveRight(float AxisValue);
    // CN Start sprinting
    void BeginSprint();
    // CN Stop sprinting
    void EndSprint();

    // CN The players health component
    class UHealthComponent* HealthComponent;
    // CN The projectile spawn point
    UPROPERTY(EditAnywhere)
        USceneComponent* ProjectileSpawnPoint;
    // CN The type of projectile
    UPROPERTY(EditAnywhere)
        TSubclassOf<class AProjectile> ProjectileClass;

};