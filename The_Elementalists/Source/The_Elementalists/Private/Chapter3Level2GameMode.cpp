// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter3Level2GameMode.h"

#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "OilSpillBlocked.h"
#include "OilSpillShooting.h"

AChapter3Level2GameMode::AChapter3Level2GameMode()
{

}

void AChapter3Level2GameMode::BeginPlay()
{
	Super::BeginPlay();

	/*UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i"), GetDifficulty());*/

	HandleGameStart();
}

FString AChapter3Level2GameMode::GetObjectiveMessage()
{
	if (RemainingOilSpills > 0)
	{
		return TEXT("Main Objective:\n- Block the oil spills. (")
			+ FString::FromInt(TotalOilSpills - RemainingOilSpills)
			+ TEXT("/") + FString::FromInt(TotalOilSpills) 
			+ TEXT(")\nSide Objective:\n- Freeze as many shooting oil spills as possible. (")
			+ FString::FromInt(TotalOilSpillsShooting - RemainingOilSpillsShooting)
			+ TEXT("/") + FString::FromInt(TotalOilSpillsShooting) + TEXT(")");

	}
	else
	{
		return TEXT("Main Objective:\n- Get back to the boat.");
	}
}

FString AChapter3Level2GameMode::GetChapterName()
{
	return TEXT("Chapter 3: Part 2");
}

void AChapter3Level2GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Chapter_3_Level3"));
}

void AChapter3Level2GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}


void AChapter3Level2GameMode::ActorDied(AActor* DeadActor)
{
	// NN If dead actor is player character...
	if (Cast<AChapterCharacter>(DeadActor))
	{
		if (ChapterCharacterController)
		{
			// CN Player died
			ChapterCharacterController->GameOverDeath();
		}
	}
	else if (Cast<AOilSpillShooting>(DeadActor))
	{
		RemainingOilSpillsShooting--;
		Score += (Cast<AOilSpillShooting>(DeadActor))->GetPointsAwarded();
	}
	else if (Cast<AOilSpillBlocked>(DeadActor))
	{
		RemainingOilSpills--;
		Score += (Cast<AOilSpillBlocked>(DeadActor))->GetPointsAwarded();
	}
	
	if (RemainingOilSpills <= 0)
	{
		SignalObjective();
	}
}

void AChapter3Level2GameMode::HandleGameStart()
{
	// CN Change level time based on difficulty
	LevelTime -= (GetDifficulty() - 1) * 30;

	SetUpOilSpills();

	ChapterCharacterController = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	// StartGame();

	// CN Start countdown until level starts
	if (ChapterCharacterController)
	{
		FTimerHandle PlayerWaitTimerHandle;
		FTimerDelegate PlayerWaitTimerDelegate = FTimerDelegate::CreateUObject(
			this,
			&AChapter3Level2GameMode::StartLevel
		);

		GetWorldTimerManager().SetTimer(
			PlayerWaitTimerHandle,
			PlayerWaitTimerDelegate,
			StartDelay,
			false
		);

	}
}

void AChapter3Level2GameMode::SetUpOilSpills()
{
	TArray<AActor*> OilSpills;
	UGameplayStatics::GetAllActorsOfClass(this, AOilSpillBlocked::StaticClass(), OilSpills);
	TotalOilSpills = OilSpills.Num();
	RemainingOilSpills = TotalOilSpills;

	TArray<AActor*> OilSpillsShooting;
	UGameplayStatics::GetAllActorsOfClass(this, AOilSpillShooting::StaticClass(), OilSpillsShooting);
	TotalOilSpillsShooting = OilSpillsShooting.Num();
	RemainingOilSpillsShooting = TotalOilSpillsShooting;
		
		/*
		for (AActor* Current : Fires)
		{
			AFire* CurrentFire = Cast<AFire>(Current);
			if (CurrentFire)
			{
				CurrentFire->ScaleHealth(GetDifficulty());
				CurrentFire->ScaleDamagePerSecond(GetDifficulty());

				AShootingFire* CurrentShootingFire = Cast<AShootingFire>(CurrentFire);
				if (CurrentShootingFire)
				{
					CurrentShootingFire->ScaleProjectileDamage(GetDifficulty());
				}
			}
		}*/
}

void AChapter3Level2GameMode::StartLevel()
{
	// UE_LOG(LogTemp, Warning, TEXT("Level Start!"));

	if (ChapterCharacterController)
	{
		ChapterCharacterController->StartLevel();

		// CN Setup and start main level countdown
		FTimerDelegate LevelStartTimerDelegate = FTimerDelegate::CreateUObject(
			ChapterCharacterController,
			&AChapter_PlayerController::GameOverTime // CN Player ran out of time
		);

		GetWorldTimerManager().SetTimer(
			LevelStartTimerHandle,
			LevelStartTimerDelegate,
			LevelTime,
			false
		);

	}
}

int32 AChapter3Level2GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter3Level2GameMode::DisplayObjective()
{
	ChapterCharacterController->StartTimer();
}

void AChapter3Level2GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10;
}