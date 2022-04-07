// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "GasProjectile.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AGasProjectile : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGasProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	UPROPERTY(EditAnywhere)
		float NauseaTime = 5.f;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UCameraShakeBase> NauseaCameraShakeClass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE void ScaleDamage(float Amount) { Damage *= Amount; };
};

