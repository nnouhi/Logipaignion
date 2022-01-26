// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter1Flashback_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter1Flashback_AIController : public AAIController
{
	GENERATED_BODY()

protected:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:

	// NN Array that stores the right side waypoints
	TArray<AActor*> RightSideWaypoints;

	// NN Array that stores the left side waypoints
	TArray<AActor*> LeftSideWaypoints;

	// NN Array that stores the right side final waypoints
	TArray<AActor*> RightSideFinalWaypoints;

	// NN Array that stores the left side final waypoints
	TArray<AActor*> LeftSideFinalWaypoints;

	AActor* ChooseRandomWaypoint(TArray<AActor*> Waypoints);

	void MoveToRandom();

	APawn* AIPawn;

	APawn* PlayerPawn;

	bool bFinishMoving = false;
	
public:
	
};
