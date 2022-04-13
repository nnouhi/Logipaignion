// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter2Level1GameMode.h"

#include "ToxicGas.h"
#include "AICharacter.h"
#include "GasMaskBox.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"


AChapter2Level1GameMode::AChapter2Level1GameMode()
{

}

void AChapter2Level1GameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i"), GetDifficulty());

	HandleGameStart();
}

FString AChapter2Level1GameMode::GetObjectiveMessage()
{
	if (bMasksEquipped)
	{
		return TEXT("Main Objectives:\n- Clear the toxic gas. (")
			+ FString::FromInt(TotalGas - RemainingGas)
			+ TEXT("/") + FString::FromInt(TotalGas) + TEXT(")\n")
			+ TEXT("- Provide the gas masks to the police officers. (")
			+ FString::FromInt(TotalAI - RemainingAI)
			+ TEXT("/") + FString::FromInt(TotalAI) + TEXT(")");
	}
	else
	{
		return TEXT("Main Objectives:\n- Clear the toxic gas. (")
			+ FString::FromInt(TotalGas - RemainingGas)
			+ TEXT("/") + FString::FromInt(TotalGas) + TEXT(")\n")
			+ TEXT("- Equip the gas masks.");
	}
}

FString AChapter2Level1GameMode::GetChapterName()
{
	return TEXT("Chapter 2: Part 1");
}

void AChapter2Level1GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Chapter_2_Level2"));
}

void AChapter2Level1GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}


void AChapter2Level1GameMode::ActorDied(AActor* DeadActor)
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
	else if (Cast<AGasMaskBox>(DeadActor))
	{
		bMasksEquipped = true;
		Score += 150; // Hardcoded for now
		SignalObjective();
	}

	if (RemainingGas + RemainingAI <= 0) // CN Level complete!
	{
		LevelComplete();
	}
}

void AChapter2Level1GameMode::HandleGameStart()
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
			&AChapter2Level1GameMode::StartLevel
		);

		GetWorldTimerManager().SetTimer(
			PlayerWaitTimerHandle,
			PlayerWaitTimerDelegate,
			StartDelay,
			false
		);

	}
}

void AChapter2Level1GameMode::StartLevel()
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

int32 AChapter2Level1GameMode::GetTotalGasCount()
{
	TArray<AActor*> Gas;
	UGameplayStatics::GetAllActorsOfClass(this, AToxicGas::StaticClass(), Gas);
	return Gas.Num();
}

int32 AChapter2Level1GameMode::GetTotalAICount()
{
	TArray<AActor*> AICharacters;
	UGameplayStatics::GetAllActorsOfClass(this, AAICharacter::StaticClass(), AICharacters);
	return AICharacters.Num();
}

void AChapter2Level1GameMode::SetupGas() {
	TArray<AActor*> Gas;
	UGameplayStatics::GetAllActorsOfClass(this, AToxicGas::StaticClass(), Gas);

	for (AActor* Current : Gas)
	{
		AToxicGas* CurrentGas = Cast<AToxicGas>(Current);
		if (CurrentGas)
		{
			CurrentGas->ScaleHealth(GetDifficulty());
			CurrentGas->ScaleDamagePerSecond(GetDifficulty());

			/*
			AShootingToxicGas* CurrentShootingToxicGas = Cast<AShootingToxicGas>(CurrentGas);
			if (CurrentShootingToxicGas)
			{
				CurrentShootingFire->ScaleProjectileDamage(GetDifficulty());
			}
			*/
		}
	}
}

int32 AChapter2Level1GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter2Level1GameMode::DisplayObjective()
{
	ChapterCharacterController->StartTimer();
}

void AChapter2Level1GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10;
}