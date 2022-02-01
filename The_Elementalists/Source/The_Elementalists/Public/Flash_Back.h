// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.h"
#include "Flash_Back.generated.h"
/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlash_Back : public ABaseGameMode
{
	GENERATED_BODY()

public:

	AFlash_Back();
	
	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

protected:

	virtual void BeginPlay() override;



	
	
};
