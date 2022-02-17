// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RandomLocationAIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API ARandomLocationAIController : public AAIController
{
	GENERATED_BODY()

public:
	ARandomLocationAIController();

protected:
	void virtual BeginPlay() override;
	void virtual Tick(float DeltaTime) override;
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;



private:
	UPROPERTY(EditAnywhere)
	float NavigableRadius = 1000.f;

	APawn* AIPawnReference;

	void MoveToRandomLocation();
	

};
