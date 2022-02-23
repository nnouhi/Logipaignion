// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Flash_Back3.generated.h"

/**
 *
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlash_Back3 : public ABaseGameMode
{
	GENERATED_BODY()

public:

	AFlash_Back3();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

	// CN Get level name
	FString GetChapterName() override;

	// CN Get level score
	int32 GetScore() override;

	// CN On level completion
	void LevelComplete() override;

	// CN Sets up Oil spill stats based on difficulty
	void SetupOilSpill();

	// CN Handles level start
	void HandleGameStart();

protected:

	virtual void BeginPlay() override;
};
