// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "WindProjectile.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AWindProjectile : public AProjectile
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWindProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 5.f;

	UPROPERTY(EditAnywhere)
	float LaunchForce = 1.f;

	UPROPERTY(EditAnywhere)
	float ImpulseForce = 2.f;

private:
	FTimerHandle DestroyTimerHandle;

	// CN The directon the projectile is fired
	FVector Direction;

	void Fade();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};