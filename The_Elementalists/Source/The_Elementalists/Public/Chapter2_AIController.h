// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter2_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter2_AIController : public AAIController
{
	GENERATED_BODY()

protected:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:

	APawn* OwnerPawn;

	class AChapterCharacter* PlayerCharacter;

	// NN Distance to activate line trace
	UPROPERTY(EditAnywhere)
	float ReachDistance = 400.f;

	// NN Distance to start moving towards player
	UPROPERTY(EditAnywhere)
	float MoveTowardsDistance = 1500.f;

	bool bPerformLineTrace = true;

	// NN FSM for the ai behaviour 
	int32 FSMAIBehaviour = 1;

	UPROPERTY(EditAnywhere)
	float NavigableRadius = 1000.f;

	UPROPERTY(EditAnywhere)
	float WaitTime = 2.f;

	FTimerHandle WaitTimeHandle;

	// NN Starts random movement behaviour
	void StartBehaviour();

	TArray<AActor*> EscapeWaypoints;

	bool bPlaySound;

	class AAICharacter* AICharacter;

	FTimerHandle SoundHandle;

	void InvokePlaySound();

public:
	void DisableLineTrace() { bPerformLineTrace = false; }
	
};
