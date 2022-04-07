// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Flash_Back2.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlash_Back2 : public ABaseGameMode
{
	GENERATED_BODY()

private:
	bool bMaskObtained = false;

public:
	AFlash_Back2();

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

	// NN Set up toxic gas damage based on difficulty 
	// NOTE: Not implemented yet
	void SetupToxicGas();

	// CN Handles level start
	void HandleGameStart();

	void MaskObtained() override;

protected:

	virtual void BeginPlay() override;
	
};
