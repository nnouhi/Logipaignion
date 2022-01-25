// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Flash_Back.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AFlash_Back : public AGameModeBase
{
	GENERATED_BODY()

public:

	AFlash_Back();
	
	// NN Getter for ObjectiveMessage
	FORCEINLINE FString GetObjectiveMessage() const { return ObjectiveMessage; }

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter();

protected:

	virtual void BeginPlay() override;

	// NN Getter for active chapter
	FString GetChapterName();

	// NN Setter for ObjectiveMessage
	void SetObjectiveMessage(const FString& ChapterName);

	

private:

	// NN Appropriate objective message to be displayed on screen
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	FString ObjectiveMessage;
	
};
