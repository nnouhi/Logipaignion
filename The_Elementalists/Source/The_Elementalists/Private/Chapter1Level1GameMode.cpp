// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1Level1GameMode.h"

#include "Fire.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingFire.h"

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
	return TEXT("Main Objective:\n- Put down all the fires (") 
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

void AChapter1Level1GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}


void AChapter1Level1GameMode::ActorDied(AActor* DeadActor)
{
	// NN If dead actor is player character...
	if (Cast<AChapterCharacter>(DeadActor)) 
	{
		if(ChapterCharacterController)
		{
			// CN Player died
			ChapterCharacterController->GameOverDeath();
		}
	}
	// NN If dead actor is a fire...
	else if (Cast<AFire>(DeadActor))
	{
		RemainingFires--;
		
		// CN Update score
		Score += (Cast<AFire>(DeadActor))->GetPointsAwarded();
	
		UE_LOG(LogTemp, Warning, TEXT("Fire put out! %i fires remaining!"), RemainingFires);
	
		if (RemainingFires <= 0) // CN Level complete!
		{
			LevelComplete();
		}
	}
}

void AChapter1Level1GameMode::HandleGameStart() 
{
	// CN Change level time based on difficulty
	LevelTime += (GetDifficulty() - 1) * 60;

	SetupFires();
	
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

		
		
	}
}

void AChapter1Level1GameMode::StartLevel()
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

int32 AChapter1Level1GameMode::GetTotalFireCount() 
{
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);
	return Fires.Num();
}

void AChapter1Level1GameMode::SetupFires() {
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);
	
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
	}
}

int32 AChapter1Level1GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter1Level1GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32) TimeRemaining) * 10;
}

void AChapter1Level1GameMode::DisplayObjective()
{
	ChapterCharacterController->StartTimer();

}
