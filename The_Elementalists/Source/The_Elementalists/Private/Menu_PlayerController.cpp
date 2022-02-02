// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu_PlayerController.h"

#include "Blueprint/UserWidget.h"

void AMenu_PlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AMenu_PlayerController::DisplayMenu()
{
	MainMenuWidget = CreateWidget(this, MainMenuClass);
	
	if (MainMenuWidget)
	{
		MainMenuWidget->AddToViewport();
		bShowMouseCursor = true;
		SetPause(true);
	}
}