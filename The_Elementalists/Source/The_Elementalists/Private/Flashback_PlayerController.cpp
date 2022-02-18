// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashback_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Flash_Back.h"

void AFlashback_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	ObjectiveWidget = CreateWidget(this, ObjectiveHUDClass);
	MinimapWidget = CreateWidget(this, MinimapHUDClass);
	HealthbarWidget = CreateWidget(this, HealthbarClass);
	MapWidget = CreateWidget(this, MapHUDClass);
	GameOverWidget = CreateWidget(this, GameOverClass);
	LevelClearWidget = CreateWidget(this, LevelClearClass);
	
}

void AFlashback_PlayerController::DisplayMap()
{

	if (MapWidget)
	{
		MapWidget->AddToViewport();
	}
}

void AFlashback_PlayerController::RemoveMap()
{
	if (MapWidget)
	{
		MapWidget->RemoveFromViewport();
	}
}

void AFlashback_PlayerController::GameOver()
{
	if (GameOverWidget)
	{
		GameOverWidget->AddToViewport();
		bShowMouseCursor = true;
		SetPause(true);
	}
}

void AFlashback_PlayerController::LevelClear()
{
	if (LevelClearWidget)
	{
		LevelClearWidget->AddToViewport();
	}
}

void AFlashback_PlayerController::StartTimer()
{
	// Declared here because in begin play its created too late
	StartTimerWidget = CreateWidget(this, StartTimerClass);
	if (StartTimerWidget)
	{
		StartTimerWidget->AddToViewport();
	}
	SetPlayerEnabledState(false);
}

void AFlashback_PlayerController::StartLevel()
{
	SetPlayerEnabledState(true);
	if (StartTimerWidget)
	{
		StartTimerWidget->RemoveFromViewport();
	}

	if (HealthbarWidget)
	{
		HealthbarWidget->AddToViewport();
	}

	if (ObjectiveWidget)
	{
		ObjectiveWidget->AddToViewport();
	}

	if (MinimapWidget)
	{
		MinimapWidget->AddToViewport();
	}

}

void AFlashback_PlayerController::SetPlayerEnabledState(bool bEnabled) {
	if (bEnabled) {
		GetPawn()->EnableInput(this);
	}
	else {
		GetPawn()->DisableInput(this);
	}
}