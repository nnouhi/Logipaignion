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

    virtual void ActorDied(AActor* DeadActor);
	
};
