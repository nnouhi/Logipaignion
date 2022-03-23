// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "IceProjectile.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AIceProjectile : public AProjectile
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AIceProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	// CN The ice cube that spawns
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AIceCube> IceCubeClass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
