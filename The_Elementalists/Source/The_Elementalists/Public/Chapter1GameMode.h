// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Chapter1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter1GameMode : public ABaseGameMode
{
	GENERATED_BODY()

public:
	AChapter1GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

protected:

	virtual void BeginPlay() override;

};
