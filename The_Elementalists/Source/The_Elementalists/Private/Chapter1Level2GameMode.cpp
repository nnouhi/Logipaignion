// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1Level2GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Fire.h"
#include "ShootingFire.h"


AChapter1Level2GameMode::AChapter1Level2GameMode()
{

}

void AChapter1Level2GameMode::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

int32 AChapter1Level2GameMode::GetTotalFireCount()
{
	// NN Get all fires that are in still in level
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);
	return Fires.Num();
}

void AChapter1Level2GameMode::SetupFires()
{
	/* NN == Adjust Fire HP, DMGand Projectile DMG based on difficulty == */
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

void AChapter1Level2GameMode::HandleGameStart()
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
			&AChapter1Level2GameMode::StartLevel
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

void AChapter1Level2GameMode::StartLevel()
{
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

void AChapter1Level2GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Chapter_1_Level3"));
}

void AChapter1Level2GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	// Display Level Clear screen
	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}

void AChapter1Level2GameMode::ActorDied(AActor* DeadActor)
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

FString AChapter1Level2GameMode::GetObjectiveMessage()
{
	return TEXT("Put down all the fires (")
		+ FString::FromInt(TotalFires - RemainingFires)
		+ TEXT("/") + FString::FromInt(TotalFires) + TEXT(") \n")
		+ TEXT("Hint: Not all fires behave the same way");
}

FString AChapter1Level2GameMode::GetChapterName()
{
	return TEXT("Chapter 1: Part 2");
}

int32 AChapter1Level2GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter1Level2GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10 * GetDifficulty();
}