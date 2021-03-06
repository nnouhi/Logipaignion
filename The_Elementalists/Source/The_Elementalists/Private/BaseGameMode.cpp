// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

int32 ABaseGameMode::Difficulty = 1;
int32 ABaseGameMode::TotalScore = 0;
float ABaseGameMode::BaseTurnRate = 20.f;

FString ABaseGameMode::GetObjectiveMessage()
{
    return TEXT("");
}

FString ABaseGameMode::GetChapterName()
{
	return TEXT("");
}

void ABaseGameMode::ProgressNextChapter()
{
	return;
}

void ABaseGameMode::LevelComplete()
{
	ProgressNextChapter();
	return;
}

void ABaseGameMode::ActorDied(AActor* DeadActor)
{
	return;
}

void ABaseGameMode::SetDifficulty(int32 NewDifficulty)
{
	Difficulty = NewDifficulty;
}

int32 ABaseGameMode::GetDifficulty()
{
	return Difficulty;
}

int32 ABaseGameMode::GetScore()
{
	return 0;
}

int32 ABaseGameMode::GetTotalScore()
{
	return TotalScore;
}

void ABaseGameMode::AddToTotalScore(int32 Score)
{
	TotalScore += Score;
}

void ABaseGameMode::ClearGame()
{
	UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i , Score: %i"), Difficulty, TotalScore);
	Difficulty = 1;
	TotalScore = 0;
}

FString ABaseGameMode::GetTimeRemaining()
{
	// NN Get remaining time to convert to minutes/seconds
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);

	int32 Seconds = (FMath::FloorToInt(TimeRemaining) % 60);
	int32 Minutes = (FMath::FloorToInt(TimeRemaining) % 3600) / 60;
	if (Seconds < 10)
	{
		return FString::FromInt(Minutes) + TEXT(":0") + FString::FromInt(Seconds);
	}
	else
	{
		return FString::FromInt(Minutes) + TEXT(":") + FString::FromInt(Seconds);
	}
}