// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chapter1GameMode.h"
#include "Chapter1Level3GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter1Level3GameMode : public AChapter1GameMode
{
	GENERATED_BODY()

public:
	AChapter1Level3GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	// NN Show level clear widget
	void LevelComplete() override;

	// NN Check which actor has died and apply logic
	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

	// CN Get level name
	FString GetChapterName() override;

	// CN Get level score
	int32 GetScore() override;

protected:
	virtual void BeginPlay() override;

private:
	// CN Gets the total number of fires in the level
	int32 GetTotalFireCount();

	// CN Gets the total number of villagers in the level
	int32 GetTotalVillagerCount();

	// CN Sets up fire stats based on difficulty
	void SetupFires();

	// CN Handles level start
	void HandleGameStart();

	// CN Starts the main timer for the level
	void StartLevel();

	// CN Keeps track of how many fires remain
	int32 TotalFires;
	int32 RemainingFires;

	// CN Keeps track of how many villagers remain
	int32 TotalVillagers;
	int32 RemainingVillagers;

	// CN Keeps track of player score
	int32 Score = 0;

	bool bInvestigationMode = false;

	// CN Timer handle for level time
	FTimerHandle LevelStartTimerHandle;

	// CN Calculates the final score based on remaining time
	void CalculateFinalScore();

	// CN Reference to player controller
	class AChapter_PlayerController* ChapterCharacterController;

};