// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FString GetObjectiveMessage();

    UFUNCTION(BlueprintCallable)
    virtual void ProgressNextChapter();
		
	UFUNCTION(BlueprintCallable)
    virtual void LevelComplete();
		
	UFUNCTION(BlueprintCallable)
	virtual FString GetChapterName();

    virtual void ActorDied(AActor* DeadActor);
	
	UFUNCTION(BlueprintCallable)
    virtual void SetDifficulty(int32 NewDifficulty);
	
	UFUNCTION(BlueprintCallable)
    virtual int32 GetDifficulty();
	
	UFUNCTION(BlueprintCallable)
    virtual int32 GetScore();
	
private:
	// CN Difficulty {1: Easy, 2: Normal, 3:Hard}
	static int32 Difficulty;
};
