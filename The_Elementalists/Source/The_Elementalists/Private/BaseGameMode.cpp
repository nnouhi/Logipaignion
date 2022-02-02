// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

int32 ABaseGameMode::Difficulty = 1;

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

}

void ABaseGameMode::ActorDied(AActor* DeadActor)
{

}

void ABaseGameMode::SetDifficulty(int32 NewDifficulty)
{
	Difficulty = NewDifficulty;
}

int32 ABaseGameMode::GetDifficulty()
{
	return Difficulty;
}