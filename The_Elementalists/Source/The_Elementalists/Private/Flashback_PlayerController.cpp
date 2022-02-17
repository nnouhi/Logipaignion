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


FString AFlashback_PlayerController::GetObjectiveMessage()
{
	AFlash_Back* FlashBackGameModeRef = Cast<AFlash_Back>(UGameplayStatics::GetGameMode(GetWorld()));
	if (FlashBackGameModeRef)
	{
		// NN Call getter method from the GameMode class to display appropriate message
		FString TestMessage = FlashBackGameModeRef->GetObjectiveMessage();
		
		return TestMessage;
	}

	return "Oopsie";
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