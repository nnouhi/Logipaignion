// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BoatAIController.generated.h"

/**
 *
 */
UCLASS()
class THE_ELEMENTALISTS_API ABoatAIController : public AAIController
{
	GENERATED_BODY()

public:

	ABoatAIController();

protected:

	virtual void BeginPlay() override;

	// NN Invoked once the move was completed
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	// NN AI moves to next waypoint
	void MoveToWaypoint(AActor* Waypoint);

	AActor* GetNextWaypoint();

	// CN Initial setup
	void SetWaypoints();
	void SetPlaceHolders();

private:

	// CN Current waypoint index
	int32 CurrentWaypointIndex = 0;

	// CN Target Rotation
	FRotator TargetRotation;

	// CN If is waiting
	bool bIsWaiting = false;

	// NN Will store all level waypoints
	TArray<AActor*> Waypoints;

public:

	virtual void Tick(float DeltaTime) override;
};
