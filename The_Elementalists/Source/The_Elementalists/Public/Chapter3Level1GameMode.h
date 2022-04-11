// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Chapter3Level1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter3Level1GameMode : public ABaseGameMode
{
	GENERATED_BODY()
public:
	AChapter3Level1GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void LevelComplete() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

	// NN Get level name
	FString GetChapterName() override;

	// NN Get level score
	int32 GetScore() override;

protected:
	virtual void BeginPlay() override;

private:

	// NN Handles level start
	void HandleGameStart();

	// NN Starts the main timer for the level
	void StartLevel();

	// NN Keeps track of player score
	int32 Score = 0;

	// NN Calculates the final score based on remaining time
	void CalculateFinalScore();

	// NN Reference to player controller
	class AChapter_PlayerController* ChapterCharacterController;
	
};
