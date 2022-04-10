// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter2Level3GameMode.h"

#include "ToxicGas.h"
#include "AICharacter.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingToxicGas.h"


AChapter2Level3GameMode::AChapter2Level3GameMode()
{

}

void AChapter2Level3GameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i"), GetDifficulty());

	HandleGameStart();
}

FString AChapter2Level3GameMode::GetObjectiveMessage()
{
	if (bInvestigationMode)
	{
		return TEXT("Investigate - Find the cause of the gas leak. \n Press 'F' to use your scanner.");
	}

	return TEXT("Clear the toxic gas. (")
		+ FString::FromInt(TotalGas - RemainingGas)
		+ TEXT("/") + FString::FromInt(TotalGas) + TEXT(")\n")
		+ TEXT("Provide the gas masks to the factory workers. (")
		+ FString::FromInt(TotalAI - RemainingAI)
		+ TEXT("/") + FString::FromInt(TotalAI) + TEXT(")");
}

FString AChapter2Level3GameMode::GetChapterName()
{
	return TEXT("Chapter 2: Part 3");
}

void AChapter2Level3GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AChapter2Level3GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}


void AChapter2Level3GameMode::ActorDied(AActor* DeadActor)
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
	// NN If dead actor is a toxic gas...
	else if (Cast<AToxicGas>(DeadActor))
	{
		RemainingGas--;

		// CN Update score
		Score += (Cast<AToxicGas>(DeadActor))->GetPointsAwarded();
	}
	else if (Cast<AAICharacter>(DeadActor))
	{
		RemainingAI--;

		// CN Update score
		Score += (Cast<AAICharacter>(DeadActor))->GetPointsAwarded();
	}

	if (RemainingGas + RemainingAI <= 0) // CN Level complete!
	{
		bInvestigationMode = true;

		GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	}
}

void AChapter2Level3GameMode::HandleGameStart()
{
	// CN Change level time based on difficulty
	LevelTime += (GetDifficulty() - 1) * 60;

	SetupGas();

	TotalGas = GetTotalGasCount();
	RemainingGas = TotalGas;

	TotalAI = GetTotalAICount();
	RemainingAI = TotalAI;

	ChapterCharacterController = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	// StartGame();

	// CN Start countdown until level starts
	if (ChapterCharacterController)
	{
		FTimerHandle PlayerWaitTimerHandle;
		FTimerDelegate PlayerWaitTimerDelegate = FTimerDelegate::CreateUObject(
			this,
			&AChapter2Level3GameMode::StartLevel
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

void AChapter2Level3GameMode::StartLevel()
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

int32 AChapter2Level3GameMode::GetTotalGasCount()
{
	TArray<AActor*> Gas;
	UGameplayStatics::GetAllActorsOfClass(this, AToxicGas::StaticClass(), Gas);
	return Gas.Num();
}

int32 AChapter2Level3GameMode::GetTotalAICount()
{
	TArray<AActor*> AICharacters;
	UGameplayStatics::GetAllActorsOfClass(this, AAICharacter::StaticClass(), AICharacters);
	return AICharacters.Num();
}

void AChapter2Level3GameMode::SetupGas() {
	TArray<AActor*> Gas;
	UGameplayStatics::GetAllActorsOfClass(this, AToxicGas::StaticClass(), Gas);

	for (AActor* Current : Gas)
	{
		AToxicGas* CurrentGas = Cast<AToxicGas>(Current);
		if (CurrentGas)
		{
			CurrentGas->ScaleHealth(GetDifficulty());
			CurrentGas->ScaleDamagePerSecond(GetDifficulty());

			AShootingToxicGas* CurrentShootingToxicGas = Cast<AShootingToxicGas>(CurrentGas);
			if (CurrentShootingToxicGas)
			{
				CurrentShootingToxicGas->ScaleProjectileDamage(GetDifficulty());
			}
		}
	}
}

int32 AChapter2Level3GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter2Level3GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10 * GetDifficulty();
}