// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OilSpill.h"
#include "OilSpillSlow.generated.h"

/**
 *
 */
UCLASS()
class THE_ELEMENTALISTS_API AOilSpillSlow : public AOilSpill
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOilSpillSlow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// CN Collision volume
	UPROPERTY(EditAnywhere)
	class USphereComponent* Trigger;

	// CN Slow down percentage
	UPROPERTY(EditAnywhere)
	float SlowPercentage = 0.5f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// CN Handles collision with pawn
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// CN Handles end collision with pawn
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


};

