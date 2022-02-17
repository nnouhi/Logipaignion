// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "Menu_PlayerController.h"

void AMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	AMenu_PlayerController* PlayerController = Cast<AMenu_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	
	if (PlayerController)
	{
		PlayerController->DisplayMenu();
	}
}