// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ToxicGas.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AToxicGas : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AToxicGas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UCameraShakeBase> NauseaCameraShakeClass;

	// CN Character reference
	class ACharacter* PlayerCharacter;

	bool bHasExploded = false;

	// CN Root
	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* CollisionMesh;

	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* GasParticles1;
	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* GasParticles2;
	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* GasParticles3;
	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* GasParticles4;

	UPROPERTY(EditAnywhere)
		UParticleSystem* DeathParticles;

	UPROPERTY(EditAnywhere)
		float DamageDistance = 150.f;

	UPROPERTY(EditAnywhere)
		float DamagePerSecond = 10.f;

	UPROPERTY(EditAnywhere)
		float BaseScale = 2.f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetHealth(float Health);

	FORCEINLINE void SetDamagePerSecond(float DPS) { DamagePerSecond = DPS; };

private:
	// CN Deal damage to player
	void DealDamage(float DeltaTime, float DPS);

	// CN The health of the fire
	UPROPERTY(EditAnywhere)
		class UHealthComponent* HealthComponent;

	// float Scale;
};