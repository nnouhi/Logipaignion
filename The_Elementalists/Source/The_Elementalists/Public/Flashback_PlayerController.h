// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Flashback_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlashback_PlayerController : public APlayerController
{
	GENERATED_BODY()
		
protected:
	virtual void BeginPlay() override;

private:
	
	void ShowHUD();
	void HideHUD();

	// CN Memory effect
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> MemoryEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* MemoryEffectWidget;

	// NN Objective widget displayed on screen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> ObjectiveHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* ObjectiveWidget;

	// NN Minimap widget displayed on screen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> MinimapHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* MinimapWidget;

	// NN Big Minimap widget displayed on screen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> MapHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* MapWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> HealthbarClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	UUserWidget* HealthbarWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> GameOverClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	UUserWidget* GameOverWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> StartTimerClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* StartTimerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> LevelClearClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* LevelClearWidget;

	// FOR press e to interact
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> InfoHUDClass;
	UPROPERTY()
		UUserWidget* InfoWidget;

	// CN For gas mask
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> GasMaskClass;
	UPROPERTY()
		UUserWidget* GasMaskWidget;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> BlurClass;
	UPROPERTY()
		UUserWidget* BlurWidget;

	// CN Pause screen
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> PauseClass;
	UPROPERTY()
		UUserWidget* PauseWidget;

public:

	// CN Pause the game
	UFUNCTION(BlueprintCallable)
	void PauseMenu();

	// CN Resume the game
	UFUNCTION(BlueprintCallable)
		void Resume();

	// NN when invoke displays map on viewport
	void DisplayMap();

	// NN when invoke removes map from viewport
	void RemoveMap();

	void GameOver();

	// CN Displays Level clear screen
	void LevelClear();

	// CN Displays the countdown timer until level starts
	void StartTimer();

	// CN Displays HUD and level timer
	void StartLevel();

	// CN Enables/Disables input
	void SetPlayerEnabledState(bool bEnabled);

	// CN For press e to interact
	void HideInfoWidget();
	void DisplayInfoWidget();

	void WearMask();

	void Blur();

	void UnBlur();
};
