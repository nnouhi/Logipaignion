// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1Level1GameMode.h"

#include "Fire.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"

AChapter1Level1GameMode::AChapter1Level1GameMode()
{

}

void AChapter1Level1GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i"), GetDifficulty());
	
	HandleGameStart();
}

FString AChapter1Level1GameMode::GetObjectiveMessage()
{
	return TEXT("Put down all the fires (") 
		+ FString::FromInt(TotalFires - RemainingFires)
		+ TEXT("/") + FString::FromInt(TotalFires) + TEXT(")");
}

FString AChapter1Level1GameMode::GetChapterName()
{
	return TEXT("Chapter 1: Part 1");
}

void AChapter1Level1GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Chapter_1_Level2"));
}

void AChapter1Level1GameMode::ActorDied(AActor* DeadActor)
{
	if (Cast<AChapterCharacter>(DeadActor)) 
	{
		if(ChapterCharacterController)
		{
			// CN Player died
			ChapterCharacterController->GameOverDeath();
		}
	}
	else if (Cast<AFire>(DeadActor))
	{
		RemainingFires--;
	
		UE_LOG(LogTemp, Warning, TEXT("Fire put out! %i fires remaining!"), RemainingFires);
	
		if (RemainingFires <= 0) // CN Level complete!
		{
			ProgressNextChapter();
		}
	}
}

void AChapter1Level1GameMode::HandleGameStart() 
{
	TotalFires = GetTotalFireCount();
	RemainingFires = TotalFires;
	
	ChapterCharacterController = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	
	// StartGame();
	
	// CN Start countdown until level starts
	if (ChapterCharacterController) 
	{
		FTimerHandle PlayerWaitTimerHandle;
		FTimerDelegate PlayerWaitTimerDelegate = FTimerDelegate::CreateUObject(
			this, 
			&AChapter1Level1GameMode::StartLevel
		);
		
		GetWorldTimerManager().SetTimer(
			PlayerWaitTimerHandle,
			PlayerWaitTimerDelegate,
			StartDelay,
			false
		);
		
		ChapterCharacterController->StartTimer();
	}
}

void AChapter1Level1GameMode::StartLevel()
{
	// UE_LOG(LogTemp, Warning, TEXT("Level Start!"));
	
	if (ChapterCharacterController) 
	{
		ChapterCharacterController->StartLevel();
		
		// CN Setup and start main level countdown
		FTimerHandle LevelStartTimerHandle;
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

int32 AChapter1Level1GameMode::GetTotalFireCount() 
{
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);
	return Fires.Num();
}