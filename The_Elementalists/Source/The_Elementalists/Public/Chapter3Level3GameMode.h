// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameMode.h"
#include "Chapter3Level3GameMode.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter3Level3GameMode : public ABaseGameMode
{
	GENERATED_BODY()
public:
	AChapter3Level3GameMode();

	// NN Method that handles which chapter the player should go to
	void ProgressNextChapter() override;

	void LevelComplete() override;

	void ActorDied(AActor* DeadActor) override;

	// NN Setter for ObjectiveMessage
	FString GetObjectiveMessage() override;

	// NN Get level name
	FString GetChapterName() override;

	// NN Get level score
	int32 GetScore() override;

protected:
	virtual void BeginPlay() override;


private:

	// CN Keep track of oil spills
	int32 TotalOilSpills = 0;
	int32 RemainingOilSpills = 0;
	int32 TotalOilSpillsShooting = 0;
	int32 RemainingOilSpillsShooting = 0;

	// CN Setup oil spills
	void SetUpOilSpills();

	// NN Handles level start
	void HandleGameStart();

	// NN Starts the main timer for the level
	void StartLevel();

	// NN Keeps track of player score
	int32 Score = 0;

	// NN Timer handle for level time
	FTimerHandle LevelStartTimerHandle;

	// NN Calculates the final score based on remaining time
	void CalculateFinalScore();

	// NN Reference to player controller
	class AChapter_PlayerController* ChapterCharacterController;
	
	TArray<AActor*> AICharacters;

	//----
	TArray<AActor*> IceCubePlaceHolderArr;
	TArray<AActor*> EscapeWaypointsArr;
	TArray<AActor*> PathCubeArr;
	TArray<class UActorComponent*> Components;

	FTimerHandle CheckPlaceHoldersHandle;
	FTimerHandle GoHandle;
	FTimerHandle SpawnHandle;


	// CN checks if path is set
	bool bIsPathSet = false;

	// NN How frequent to check for placeholers number
	UPROPERTY(EditAnywhere)
	float CheckPlaceHoldersInRate = 0.5f;
	
	UPROPERTY(EditAnywhere)
	float GoDelay = 3.f;
	
	UPROPERTY(EditAnywhere)
	float SpawnDelay = 5.f;

	void Go();

	void CheckPlaceHolders();

	void SpawnOilSpills();

	class UActorComponent* ActorComp;

	class UTriggerCollisionProfileName* ActorCompReference;

	int32 AIID = -1;
	int32 SpawnedOilSpillsCnt = 0;

	TArray<bool> bIsSpawned;
	TArray<AActor*> SpawnedOilSpills;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AOilSpillShooting> OilSplillClass;

	bool bStartOilSpillsSpawn = false;

	int32 AICount = 0;
	int32 EscapedAI = 0;

	int32 TotalIcePlaceholders = 0;

	FORCEINLINE int32 GetRemaningIceCubes() const { return  IceCubePlaceHolderArr.Num(); }
};
