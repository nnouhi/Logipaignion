// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "OilProjectileSlow.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AOilProjectileSlow : public AProjectile
{
	GENERATED_BODY()
public:
    // Sets default values for this actor's properties
    AOilProjectileSlow();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

     void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    FORCEINLINE void SetSlowness(float NewSlowness) { Slowness = NewSlowness; };

    FORCEINLINE void ScaleSlowTime(int32 Scale) { SlowTime += (SlowTime/2.f) * (Scale - 1); };

    FORCEINLINE void ScaleDamage(int32 Scale) { Damage *= Scale; };

private:
    // CN How slow the player will be (percentage of max speed)
    float Slowness = 0.5f;
    // CN For how long slowness is applied
    float SlowTime = 5.f;

    UPROPERTY(EditAnywhere)
    class USoundBase* OilHitFloorSound;

};
