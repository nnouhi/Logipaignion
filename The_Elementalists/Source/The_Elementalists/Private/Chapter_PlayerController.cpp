// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter_PlayerController.h"
#include "Blueprint/UserWidget.h"

void AChapter_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	CrosshairWidget = CreateWidget(this, CrosshairHUDClass);
	GameOverWidget = CreateWidget(this, GameOverClass);
	GameOverDeathWidget = CreateWidget(this, GameOverDeathClass);
	GameOverTimeWidget = CreateWidget(this, GameOverTimeClass);
	LevelTimerWidget = CreateWidget(this, LevelTimerClass);
	InfoWidget = CreateWidget(this, InfoHUDClass);

	// NOTE: Add to viewport the widget here for testing
	if (InfoWidget)
	{
		InfoWidget->AddToViewport();
		HideInfoWidget(); // At first hide the widget
	}
}

void AChapter_PlayerController::GameOver()
{
	// Problably fade out first or play an effect
	if (GameOverWidget)
	{
		GameOverWidget->AddToViewport();
		bShowMouseCursor = true;
		SetPause(true);
	}
}

void AChapter_PlayerController::GameOverTime()
{
	// Show Times Up widget
	UE_LOG(LogTemp, Warning, TEXT("Time's up!"));
	
	if (GameOverTimeWidget)
	{
		GameOverTimeWidget->AddToViewport();
	}
	
	/*GameOver();*/
}

void AChapter_PlayerController::GameOverDeath()
{
	// Show You Died widget
	UE_LOG(LogTemp, Warning, TEXT("You Died!"));
	
	if (GameOverDeathWidget)
	{
		GameOverDeathWidget->AddToViewport();
	}
	
	/*GameOver();*/
}
	
void AChapter_PlayerController::StartTimer()
{
	// Declared here because in begin play its created too late
	StartTimerWidget = CreateWidget(this, StartTimerClass);
	if (StartTimerWidget)
	{
		StartTimerWidget->AddToViewport();
	}
	SetPlayerEnabledState(false);
}

void AChapter_PlayerController::StartLevel()
{
	SetPlayerEnabledState(true);
	if (StartTimerWidget)
	{
		StartTimerWidget->RemoveFromViewport();
	}
	
	// NOTE: Also add health widget, probably in the same widget with crosshair
	if (CrosshairWidget)
	{
		CrosshairWidget->AddToViewport();
	}

	if (LevelTimerWidget)
	{
		LevelTimerWidget->AddToViewport();
	}
}

void AChapter_PlayerController::SetPlayerEnabledState(bool bEnabled) {
	if (bEnabled) {
		GetPawn()->EnableInput(this);
	}
	else {
		GetPawn()->DisableInput(this);
	}
}

void AChapter_PlayerController::HideInfoWidget()
{
	// Image's name is set in SwingDoor/WBP_Info as "InteractImage"
	InfoWidget->GetWidgetFromName("InteractImage")->SetVisibility(ESlateVisibility::Hidden);
}

void AChapter_PlayerController::DisplayInfoWidget()
{
	InfoWidget->GetWidgetFromName("InteractImage")->SetVisibility(ESlateVisibility::Visible);
}
