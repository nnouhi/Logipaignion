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

