// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter3Level3GameMode.h"
#include "HealthComponent.h"
#include "Chapter_PlayerController.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "OilSpillBlocked.h"
#include "OilSpillShooting.h"
#include "AICharacter.h"
#include "Chapter3Level3_AIController.h"
#include "TriggerCollisionProfileName.h"
#include "IceCubePlaceHolder.h"
#include "Engine/TargetPoint.h"


AChapter3Level3GameMode::AChapter3Level3GameMode()
{

}

void AChapter3Level3GameMode::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;

	// NN Get all ice cubes & Path cube
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), IceCubePlaceHolderArr);
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("8"), EscapeWaypointsArr);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Path"), PathCubeArr);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAICharacter::StaticClass(), AICharacters);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Spawned"), SpawnedOilSpills);
	
	AICount = AICharacters.Num();
	EscapedAI = AICount;
	TotalIcePlaceholders = IceCubePlaceHolderArr.Num();
	// Populate spawned array with false
	for (int i = 0; i < SpawnedOilSpills.Num(); i++)
	{
		bIsSpawned.Add(false);
	}


	// NN Check every ... of seconds how many placeholders remain
	GetWorldTimerManager().SetTimer(
		CheckPlaceHoldersHandle,
		this,
		&AChapter3Level3GameMode::CheckPlaceHolders,
		CheckPlaceHoldersInRate,
		true);


	/*UE_LOG(LogTemp, Warning, TEXT("Difficulty: %i"), GetDifficulty());*/

	HandleGameStart();
}



FString AChapter3Level3GameMode::GetObjectiveMessage()
{
	if (!bIsPathSet)
	{
		return TEXT("Create a path to reach the sailors(")
			+ FString::FromInt(TotalIcePlaceholders - GetRemaningIceCubes())
			+ TEXT("/") + FString::FromInt(TotalIcePlaceholders)
			+ TEXT(")\nSide Objective: Freeze as many shooting oil spills as possible. (")
			+ FString::FromInt(TotalOilSpillsShooting - RemainingOilSpillsShooting)
			+ TEXT("/") + FString::FromInt(TotalOilSpillsShooting) + TEXT(")");
	}

	return TEXT("Help the sailors to reach your boat safely. (")
		+ FString::FromInt(AICount - EscapedAI) // FINISH TOMORROW 
		+ TEXT("/") + FString::FromInt(AICount)
		+ TEXT(")\nSide Objective: Freeze as many shooting oil spills as possible. (")
		+ FString::FromInt(TotalOilSpillsShooting - RemainingOilSpillsShooting)
		+ TEXT("/") + FString::FromInt(TotalOilSpillsShooting) + TEXT(")");
	
}

FString AChapter3Level3GameMode::GetChapterName()
{
	return TEXT("Chapter 3: Part 3");
}

void AChapter3Level3GameMode::ProgressNextChapter()
{
	// Play loading screen
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AChapter3Level3GameMode::LevelComplete()
{
	GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
	CalculateFinalScore();
	AddToTotalScore(GetScore());

	if (ChapterCharacterController)
	{
		ChapterCharacterController->LevelClear();
	}
}


void AChapter3Level3GameMode::ActorDied(AActor* DeadActor)
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
	}
	else if (Cast<AOilSpillBlocked>(DeadActor))
	{
		RemainingOilSpills--;
	}
	else if (Cast<AAICharacter>(DeadActor))
	{
		
		Components = Cast<AAICharacter>(DeadActor)->GetComponentsByTag(UHealthComponent::StaticClass(), FName(TEXT("HealthComp")));
		if (Cast<UHealthComponent>(Components[0])->GetHealthPercentage() > 0.f)
		{
			EscapedAI--;
			return;
		}
		// NN friendly ai died :(
		DeadActor->Destroy();
		AICount--;
	}
}

void AChapter3Level3GameMode::HandleGameStart()
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
			&AChapter3Level3GameMode::StartLevel
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

void AChapter3Level3GameMode::SetUpOilSpills()
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

void AChapter3Level3GameMode::StartLevel()
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

int32 AChapter3Level3GameMode::GetScore()
{
	return Score * GetDifficulty();
}

void AChapter3Level3GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10 * GetDifficulty();
}

void AChapter3Level3GameMode::Go()
{
	
	AIID++;
	
	if (AIID < AICharacters.Num())
	{
		if (Cast<AAICharacter>(AICharacters[AIID]))
		{
			if (Cast<AChapter3Level3_AIController>(Cast<AAICharacter>(AICharacters[AIID])->GetController()))
			{
				Cast<AChapter3Level3_AIController>(Cast<AAICharacter>(AICharacters[AIID])->GetController())->MoveToBoat(EscapeWaypointsArr[0]);
			}
		}
		GetWorldTimerManager().SetTimer(
			GoHandle,
			this,
			&AChapter3Level3GameMode::Go,
			GoDelay,
			true);
	}
}

void AChapter3Level3GameMode::CheckPlaceHolders()
{
	// NN All place holders were filled/destroyed (path is created)
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), IceCubePlaceHolderArr);

	/*UE_LOG(LogTemp, Warning, TEXT("%i"),IceCubePlaceHolderArr.Num());*/

	if (IceCubePlaceHolderArr.Num() == 0 && !bIsPathSet) // NN Exec block of code only if id=0
	{
		// CN set path so actions are not repeated
		bIsPathSet = true;

		for (int32 i = 0; i < PathCubeArr.Num(); i++)
		{
			ActorComp = PathCubeArr[i]->GetComponentByClass(UTriggerCollisionProfileName::StaticClass());
			ActorCompReference = Cast<UTriggerCollisionProfileName>(ActorComp);

			if (ActorComp)
			{
				UE_LOG(LogTemp, Warning, TEXT("Move"));

				ActorCompReference->ChangeCollisionProfileName();
				if (i == PathCubeArr.Num() - 1)
				{
					Go();

				}	
			}
		}
	}
	else if (IceCubePlaceHolderArr.Num() <= 25 && !bStartOilSpillsSpawn)
	{
		bStartOilSpillsSpawn = true;
		SpawnOilSpills();
	}

	return;
}

void AChapter3Level3GameMode::SpawnOilSpills()
{
	int32 Index = FMath::RandRange(0, SpawnedOilSpills.Num() - 1);
	while (bIsSpawned[Index] == true)
	{
		Index = FMath::RandRange(0, SpawnedOilSpills.Num() - 1);
	}
	bIsSpawned[Index] = true;

	// NN Increasing cntrs
	SpawnedOilSpillsCnt++;
	TotalOilSpillsShooting++;
	RemainingOilSpillsShooting++;

	AOilSpillShooting* Projectile = GetWorld()->SpawnActor<AOilSpillShooting>(OilSplillClass,
		SpawnedOilSpills[Index]->GetActorLocation(), SpawnedOilSpills[Index]->GetActorRotation());
	UE_LOG(LogTemp, Warning, TEXT("Oil Spill spawned: %i / %i"), SpawnedOilSpillsCnt, SpawnedOilSpills.Num());
	
	if (SpawnedOilSpillsCnt == SpawnedOilSpills.Num())
	{
		return;
	}
		
	// NN Spawn oil spils every x amount of time
	GetWorldTimerManager().SetTimer(
		SpawnHandle,
		this,
		&AChapter3Level3GameMode::SpawnOilSpills,
		SpawnDelay,
		false);
}

