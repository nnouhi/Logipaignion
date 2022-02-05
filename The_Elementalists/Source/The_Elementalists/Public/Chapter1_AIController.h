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

	// NN Player reference
	APawn* PlayerPawn;

	// NN AI reference
	APawn* AIPawn;

	// NN A reference to the closest door of the AI
	class ASwingDoor* ClosestDoor;

	// NN Store all waypoints of level inside the array
	TArray<AActor*> Waypoints;
	
	// NN Store all SwingDoors of level inside the array
	TArray<AActor*> SwingDoors;

	float SmallestDistance = 10000.f;


public:

	AActor* GetRandomWaypoint();

private:
	
	bool bGetOut = false;
};
