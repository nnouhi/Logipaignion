// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter_PlayerController.h"
#include "Blueprint/UserWidget.h"

void AChapter_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	CrosshairWidget = CreateWidget(this, CrosshairHUDClass);

	if (CrosshairWidget)
	{
		CrosshairWidget->AddToViewport();
	}
}