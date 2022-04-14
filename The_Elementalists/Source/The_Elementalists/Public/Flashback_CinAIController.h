// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Flashback_CinAIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlashback_CinAIController : public AAIController
{
	GENERATED_BODY()

public:

private:

	APawn* AIPawn;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	TArray<AActor*> Waypoints;

protected:
	
};
