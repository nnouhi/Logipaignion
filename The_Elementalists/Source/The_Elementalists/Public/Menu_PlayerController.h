// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Menu_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AMenu_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
	
	// CN Main menu widget
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> MainMenuClass;
	UPROPERTY()
	UUserWidget* MainMenuWidget;
	
public:
	
	// CN Displays the menu
	void DisplayMenu();

};
