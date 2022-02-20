// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1Level3GameMode.h"

#include "Kismet/GameplayStatics.h"
#include "Chapter_PlayerController.h"
#include "Chapter1_AIController.h"
#include "ChapterCharacter.h"
#include "Fire.h"
#include "InteractableItem.h"
#include "ShootingFire.h"


AChapter1Level3GameMode::AChapter1Level3GameMode()
{

}

void AChapter1Level3GameMode::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

int32 AChapter1Level3GameMode::GetTotalFireCount()
{
	// NN Get all fires that are in still in level
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);
	return Fires.Num();
}

int32 AChapter1Level3GameMode::GetTotalVillagerCount()
{
	// CN Get all villagers that are in still in level
	TArray<AActor*> Villagers;
	UGameplayStatics::GetAllActorsOfClass(this, AChapter1_AIController::StaticClass(), Villagers);
	return Villagers.Num();
}

void AChapter1Level3GameMode::SetupFires()
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

void AChapter1Level3GameMode::ShowCigarette(bool bShow)
{
	TArray<AActor*> CigaretteArray;
	UGameplayStatics::GetAllActorsOfClass(this, AInteractableItem::StaticClass(), CigaretteArray); \
	
	AInteractableItem* Cigarette = Cast<AInteractableItem>(CigaretteArray.Top());
	if (Cigarette)
	{
		Cigarette->SetActorHiddenInGame(!bShow);
	}
}

void AChapter1Level3GameMode::HandleGameStart()
{
	// CN Change level time based on difficulty
	LevelTime += (GetDifficulty() - 1) * 60;

	// CN Hide cigarette
	ShowCigarette(false);

	SetupFires();

	TotalFires = GetTotalFireCount();
	RemainingFires = TotalFires;

	TotalVillagers = GetTotalVillagerCount();
	RemainingVillagers = TotalVillagers;

	ChapterCharacterController = Cast<AChapter_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	// StartGame();

	// CN Start countdown until level starts
	if (ChapterCharacterController)
	{
		FTimerHandle PlayerWaitTimerHandle;
		FTimerDelegate PlayerWaitTimerDelegate = FTimerDelegate::CreateUObject(
			this,
			&AChapter1Level3GameMode::StartLevel
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

void AChapter1Level3GameMode::StartLevel()
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

void AChapter1Level3GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby")); // change to lobby
}

void AChapter1Level3GameMode::LevelComplete()
{
	
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	// Display Level Clear screen
	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}

void AChapter1Level3GameMode::ActorDied(AActor* DeadActor)
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
	}
	// CN If dead actor is an AI Controller...
	else if (Cast<AChapter1_AIController>(DeadActor))
	{
		RemainingVillagers--;

		// CN Update score
		Score += 100; // hard coded for now

		UE_LOG(LogTemp, Warning, TEXT("Villager freed!"));
	}

	if (RemainingFires <= 0 && RemainingVillagers <= 0) // CN Ready for Investigation Mode
	{
		bInvestigationMode = true;
		// Play sound
		GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
		ShowCigarette(true);
	}
}

FString AChapter1Level3GameMode::GetObjectiveMessage()
{
	if (bInvestigationMode)
	{
		return TEXT("Investigate - Find the cause of the fire. \n Press 'F' to use your scanner.") ;
	}
	// else
	return TEXT("Put down all the fires (")
		+ FString::FromInt(TotalFires - RemainingFires)
		+ TEXT("/") + FString::FromInt(TotalFires) + TEXT(") \n")
		+ TEXT("Free all the trapped villagers (")
		+ FString::FromInt(TotalVillagers - RemainingVillagers)
		+ TEXT("/") + FString::FromInt(TotalVillagers) + TEXT(")");
}

FString AChapter1Level3GameMode::GetChapterName()
{
	return TEXT("Chapter 1: Part 3");
}

int32 AChapter1Level3GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter1Level3GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10 * GetDifficulty();
}