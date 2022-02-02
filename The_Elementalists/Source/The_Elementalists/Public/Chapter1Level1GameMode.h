// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chapter1GameMode.h"
#include "Chapter1Level1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter1Level1GameMode : public AChapter1GameMode
{
	GENERATED_BODY()
	
public:
	AChapter1Level1GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;
	
	// CN Get level name
	FString GetChapterName() override;

protected:
	virtual void BeginPlay() override;
	
private:
	// CN Gets the total number of fires in the level
	int32 GetTotalFireCount();
	
	// CN Handles level start
	void HandleGameStart();
	
	// CN Starts the main timer for the level
	void StartLevel();
	
	// CN Keeps track of how many fires remain
	int32 TotalFires;
	int32 RemainingFires;

	// CN Reference to player controller
	class AChapter_PlayerController* ChapterCharacterController;
};