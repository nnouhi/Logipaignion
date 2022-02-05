// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Chapter_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// CN Displays game over menu screen to player
	void GameOver();

	// CN Displays You Died screen and then calls GameOver()
	void GameOverDeath();

	// CN Displays Times Up screen and then calls GameOver()
	void GameOverTime();
	
	// CN Displays the countdown timer until level starts
	void StartTimer();

	// CN Displays HUD and level timer
	void StartLevel();

	// CN Enables/Disables input
	void SetPlayerEnabledState(bool bEnabled);

	// NN When player is near door make widget visible
	void HideInfoWidget();

	// NN When player is not near the door make widget invisible
	void DisplayInfoWidget();

protected:
	virtual void BeginPlay() override;

private:

	// NN Objective widget displayed on screen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> CrosshairHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* CrosshairWidget;

	// CN Game Over death menu screen
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> GameOverDeathClass;
	UPROPERTY()
	UUserWidget* GameOverDeathWidget;

	// CN Game Over time menu screen
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> GameOverTimeClass;
	UPROPERTY()
	UUserWidget* GameOverTimeWidget;

	// CN Game Over menu screen
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> GameOverClass;
	UPROPERTY()
	UUserWidget* GameOverWidget;

	// CN Countdown timer start screen
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> StartTimerClass;
	UPROPERTY()
	UUserWidget* StartTimerWidget;

	// CN Level timer and objective display
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> LevelTimerClass;
	UPROPERTY()
	UUserWidget* LevelTimerWidget;	

	// NN Info widget when interacting with doors
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> InfoHUDClass;
	UPROPERTY()
	UUserWidget* InfoWidget;
};