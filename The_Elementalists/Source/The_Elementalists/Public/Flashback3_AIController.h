// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Flashback3_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlashback3_AIController : public AAIController
{
	GENERATED_BODY()

public:
	AFlashback3_AIController();

protected:
	
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	// NN Invoked once the move was completed
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	// NN Finds the closest waypoint to AI
	void FindClosestWaypoint();

	// NN AI moves to closest waypoint
	void MoveToClosestWaypoint(AActor* Waypoint);
	
private:

	// NN AI Reference
	APawn* AIBoat;

	// NN Will store all level waypoints
	TArray<AActor*> Waypoints;
	TArray<AActor*> ShoreWaypoints;
	TArray<bool> WaypointsFlag;

	// NN Stores the distance of the closest waypoint of the AI
	float SmallestDistanceFromWaypoint = 100000.f; //temp value

	// NN Index of the closest waypoint to the AI 
	//(used to remove it using from the array using RemoveAt(Index))
	int32 SmallestDistanceIndex = 0;
	
	// NN Closest waypoint
	AActor* WaypointClosestToAI = NULL;

	// NN Whether or not boat should be destroyed
	bool bInvokeMoveToShore = false;

	// NN AI moves to shore waypoint
	void MoveToShore();

};
