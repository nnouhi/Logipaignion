// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter1_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter1_AIController : public AAIController
{
	GENERATED_BODY()

protected:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltatTime) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	void ChooseRandomEscapeWaypoint();

	// NN Player reference
	APawn* PlayerPawn;

	// NN AI reference
	APawn* AIPawn;

	// NN A reference to the closest door of the AI
	class ASwingDoor* ClosestDoor;

	// NN Store all waypoints of level inside the array
	TArray<AActor*> Waypoints;

	// NN Store all escape waypoints of level inside the array
	TArray<AActor*> EscapeWaypoints;
	
	// NN Store all SwingDoors of level inside the array
	TArray<AActor*> SwingDoors;

	// NN Stores the distance of the closest door of the AI 
	float SmallestDistanceFromDoor = 10000.f; // temp value

	// NN Stores the distance of the closest waypoint of the AI
	float SmallestDistanceFromWaypoint = -100000.f; // temp value

	// NN Index of the closest waypoint to the AI 
	int32 SmallestDistanceIndex = 0;

	// NN Should we delete the AI?
	bool bDestroy = false;

	// NN Should AI move to escape waypoint?
	bool bMoveToEscapeWaypoint = false;

	// NN Closest waypoint
	AActor* TempWaypoint = nullptr;

	FTimerHandle MoveTimerHandle;


public:

	void FindClosestWaypoint();

private:
	
	bool bGetOut = false;
};
