// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "MainMenuGameMode.generated.h"


UCLASS()
class THE_ELEMENTALISTS_API AMainMenuGameMode : public ABaseGameMode
{
	GENERATED_BODY()
	
protected:
	// CN Call controller to display menu
	virtual void BeginPlay() override;

};
