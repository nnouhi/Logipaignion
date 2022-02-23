// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OilSpill.h"
#include "OilSpillBlocked.generated.h"

/**
 *
 */
UCLASS()
class THE_ELEMENTALISTS_API AOilSpillBlocked : public AOilSpill
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOilSpillBlocked();

	// CN Increments number of place holders
	FORCEINLINE void IncrementPlaceHolders() { PlaceHolders++; };

	// CN Decrements number of place holders
	FORCEINLINE void DecrementPlaceHolders() { PlaceHolders--; };

	// CN Checks if all place holders are destroyed
	FORCEINLINE bool IsBlocked() { return PlaceHolders <= 0; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// CN how fast the oil spill scales - set to 0 for no scaling
	UPROPERTY(EditAnywhere)
	float ScaleTime = 0.15f;

	// CN Initial oil spill scale
	UPROPERTY(EditAnywhere)
	float Scale = 1.f;

	UPROPERTY(EditAnywhere)
	float Height = 0.2f;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// CN Number of place holders
	int32 PlaceHolders = 0;

	float Damage = 1000.f; // CN instant death
};
