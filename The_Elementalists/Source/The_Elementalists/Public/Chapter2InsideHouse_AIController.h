// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter2InsideHouse_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter2InsideHouse_AIController : public AAIController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	APawn* OwnerPawn;

	class AAICharacter* AICharacter;

	class AChapterCharacter* PlayerCharacter;

	// NN Distance to activate line trace
	UPROPERTY(EditAnywhere)
	float ReachDistance = 400.f;


	bool bPerformLineTrace = true;

	bool bMoveToInvoked = false;

	TArray<AActor*> EscapeWaypoints;

	bool bPlaySound = true;

	void InvokePlaySound();

	FTimerHandle SoundHandle;

public:
	void DisableLineTrace() { bPerformLineTrace = false; }

};
