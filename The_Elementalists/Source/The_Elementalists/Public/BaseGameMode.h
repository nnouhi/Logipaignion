// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FString GetObjectiveMessage();

    UFUNCTION(BlueprintCallable)
    virtual void ProgressNextChapter();
		
	UFUNCTION(BlueprintCallable)
    virtual void LevelComplete();
		
	UFUNCTION(BlueprintCallable)
	virtual FString GetChapterName();

	UFUNCTION(BlueprintCallable)
    virtual void ActorDied(AActor* DeadActor);
	
	UFUNCTION(BlueprintCallable)
    virtual void SetDifficulty(int32 NewDifficulty);
	
	UFUNCTION(BlueprintCallable)
    virtual int32 GetDifficulty();
	
	UFUNCTION(BlueprintCallable)
    virtual int32 GetScore();

	UFUNCTION(BlueprintCallable)
	int32 GetTotalScore();

	UFUNCTION(BlueprintCallable)
	FString GetTimeRemaining();

	void AddToTotalScore(int32 Score);

	virtual void MaskObtained() { return; }

	// CN To show ! for objective
	UPROPERTY(BlueprintReadWrite)
	bool bSignalObjective = true;

	FORCEINLINE void ClearSignalObjective() { bSignalObjective = false;  }

	FORCEINLINE void SignalObjective() { bSignalObjective = true; }


	// NN Setter getter to handle sens
	UFUNCTION(BlueprintCallable)
	virtual float GetBaseTurnRate() { return BaseTurnRate; }

	UFUNCTION(BlueprintCallable)
	virtual void SetBaseTurnRate(float SetTurnRate) { BaseTurnRate = SetTurnRate; };

	UFUNCTION(BlueprintCallable)
	virtual bool GetInvestigationState() { return false; }

	// NN This method resets static attributes (reset difficulty, total score)
	UFUNCTION(BlueprintCallable)
	void ClearGame();


	
private:
	// CN Difficulty {1: Easy, 2: Normal, 3:Hard}
	static int32 Difficulty;

	// CN Total playthrough score
	static int32 TotalScore;

	static float BaseTurnRate;

protected:
	// CN Start timer
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float StartDelay = 8.f;

	// CN Level timer
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float LevelTime = 120.f;

	// CN Timer handle for level time
	FTimerHandle LevelStartTimerHandle;

	// CN Investigation mode on
	UPROPERTY(BlueprintReadOnly)
	bool bInvestigationMode = false;
};
