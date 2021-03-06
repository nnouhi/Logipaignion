// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Chapter2Level1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter2Level1GameMode : public ABaseGameMode
{
	GENERATED_BODY()

public:
	AChapter2Level1GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void LevelComplete() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

	// CN Get level name
	FString GetChapterName() override;

	// CN Get level score
	int32 GetScore() override;

	UFUNCTION(BlueprintCallable)
	void DisplayObjective();

protected:
	virtual void BeginPlay() override;

private:

	// CN Set after masks equipped from box
	bool bMasksEquipped = false;

	// CN Gets the total number of gas in the level
	int32 GetTotalGasCount();

	// CN Gets the total number of AI in the level
	int32 GetTotalAICount();

	// CN Sets up fire stats based on difficulty
	void SetupGas();

	// CN Handles level start
	void HandleGameStart();

	// CN Starts the main timer for the level
	void StartLevel();

	// CN Keeps track of how many gases remain
	int32 TotalGas;
	int32 RemainingGas;

	// CN Keeps track of how many AI remain
	int32 TotalAI;
	int32 RemainingAI;


	// CN Keeps track of player score
	int32 Score = 0;

	// CN Calculates the final score based on remaining time
	void CalculateFinalScore();

	// CN Reference to player controller
	class AChapter_PlayerController* ChapterCharacterController;
};