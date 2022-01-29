// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "InForest_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AInForest_AIController : public AAIController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AActor* ChooseWaypoint();

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:

	// NN Array that stores the right side waypoints
	TArray<AActor*> InForestWaypoints;

	FString TargetPoint = "TargetPoint";

	int32 TargetPointIndex = 102;

	APawn* PlayerCharacter;

	APawn* AIPawn;
	
	UPROPERTY(EditAnywhere)
	float ValidDistancePlayerAI = 1500.f;

	bool bKeepCheckingDistance = false;

	UPROPERTY(EditAnywhere)
	class USoundBase* CallingSounds;

public:
	
};
