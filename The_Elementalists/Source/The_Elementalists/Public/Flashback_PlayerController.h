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

	// NN BlueprintCallable method that will obtained the appropriate text to show on screen
	UFUNCTION(BluePrintCallable)
	FString GetObjectiveMessage();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> HealthbarClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	UUserWidget* HealthbarWidget;
	
};
