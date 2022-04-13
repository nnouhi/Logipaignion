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
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("8"), EscapeWaypointsArr);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Path"), PathCubeArr);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAICharacter::StaticClass(), AICharacters);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Spawned"), SpawnedOilSpills);
	TArray<AActor*> OilSpillsBlocked;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AOilSpillBlocked::StaticClass(), OilSpillsBlocked);
	TotalOilSpills = OilSpillsBlocked.Num();
	RemainingOilSpills = TotalOilSpills;

	SetIceCubePlaceHolders();
	// Hide Oil spill placeholders
	for (AActor* PlaceHolder : IceCubePlaceHolderArrOilSpill)
	{
		PlaceHolder->SetActorHiddenInGame(true);
	}

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

void AChapter3Level3GameMode::SetIceCubePlaceHolders()
{
	IceCubePlaceHolderArr.Empty();
	IceCubePlaceHolderArr.Shrink();

	IceCubePlaceHolderArrOilSpill.Empty();
	IceCubePlaceHolderArrOilSpill.Shrink();

	// Setup ice cube place holders
	TArray<AActor*> IceCubePlaceHolderArrTotal;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), IceCubePlaceHolderArrTotal);
	for (int32 i = 0; i < IceCubePlaceHolderArrTotal.Num(); i++)
	{
		if (IceCubePlaceHolderArrTotal[i]->Tags[0] == "Oil")
		{
			IceCubePlaceHolderArrOilSpill.Add(IceCubePlaceHolderArrTotal[i]);
		}
		else
		{
			IceCubePlaceHolderArr.Add(IceCubePlaceHolderArrTotal[i]);
		}
	}
}

FString AChapter3Level3GameMode::GetObjectiveMessage()
{
	if (bInvestigationMode)
	{
		return TEXT("Main Objective:\n- Investigate - Find the cause of the oil spill. \n Press 'F' to use your scanner.");
	}

	if (!bIsPathSet)
	{
		return TEXT("Main Objective:\n- Create a path to reach the sailors(")
			+ FString::FromInt(TotalIcePlaceholders - GetRemaningIceCubes())
			+ TEXT("/") + FString::FromInt(TotalIcePlaceholders)
			+ TEXT(")\nSide Objective:\n- Freeze as many shooting oil spills as possible. (")
			+ FString::FromInt(TotalOilSpillsShooting - RemainingOilSpillsShooting)
			+ TEXT("/") + FString::FromInt(TotalOilSpillsShooting) + TEXT(")");
	}

	if (!bAISafe)
	{
		return TEXT("Main Objective:\n- Help the sailors to reach your boat safely. (")
			+ FString::FromInt(AICount - EscapedAI)
			+ TEXT("/") + FString::FromInt(AICount)
			+ TEXT(")\nSide Objective:\n- Freeze as many shooting oil spills as possible. (")
			+ FString::FromInt(TotalOilSpillsShooting - RemainingOilSpillsShooting)
			+ TEXT("/") + FString::FromInt(TotalOilSpillsShooting) + TEXT(")");
	}

	// else
	return TEXT("Main Objective:\n- Block the oil spill. (")
		+ FString::FromInt(TotalOilSpills - RemainingOilSpills)
		+ TEXT("/") + FString::FromInt(TotalOilSpills)
		+ TEXT(")\nSide Objective:\n- Freeze as many shooting oil spills as possible. (")
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
		Score += (Cast<AOilSpillShooting>(DeadActor))->GetPointsAwarded();
	}
	else if (Cast<AAICharacter>(DeadActor))
	{
		
		Components = Cast<AAICharacter>(DeadActor)->GetComponentsByTag(UHealthComponent::StaticClass(), FName(TEXT("HealthComp")));
		if (Cast<UHealthComponent>(Components[0])->GetHealthPercentage() > 0.f)
		{
			EscapedAI--;
			Score += (Cast<AAICharacter>(DeadActor))->GetPointsAwarded();

			TArray<AActor*> BoatLocation;

			// Waypoint with tag 1 has boat location
			UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("1"), BoatLocation);
			if (BoatLocation.Num() > 0)
			{
				Cast<AChapter3Level3_AIController>(((Cast<AAICharacter>(DeadActor))->GetController()))->JumpToBoat(BoatLocation[0]->GetActorLocation(), AICount - EscapedAI);
			}

			// All AI reached boat
			if (EscapedAI == 0)
			{
				SignalObjective();
				bAISafe = true;
				SetIceCubePlaceHolders();
				// Show Oil spill placeholders
				for (AActor* PlaceHolder : IceCubePlaceHolderArrOilSpill)
				{
					PlaceHolder->SetActorHiddenInGame(false);
				}
			}
			return;
		}
		// NN AI Died display you lost screen
		else
		{
			if (ChapterCharacterController && !bAIDied)
			{
				bAIDied = true;
				ChapterCharacterController->DisplayYouLostWidget();
			}

		}
		// NN friendly ai died :(
		// GameOver;
		// DeadActor->Destroy();
		/*AICount--;*/
	}
	else if (Cast<AOilSpillBlocked>(DeadActor))
	{
		RemainingOilSpills--;
		Score += (Cast<AOilSpillBlocked>(DeadActor))->GetPointsAwarded();

		SignalObjective();
		bInvestigationMode = true;

		GetWorldTimerManager().PauseTimer(LevelStartTimerHandle);
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

	for (AActor* Current : OilSpillsShooting)
	{
		AOilSpillShooting* CurrentOilSpillShooting = Cast<AOilSpillShooting>(Current);
		if (CurrentOilSpillShooting)
		{
			CurrentOilSpillShooting->ScaleByDifficulty(GetDifficulty());
		}
	}
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

void AChapter3Level3GameMode::DisplayObjective()
{
	ChapterCharacterController->StartTimer();
}

void AChapter3Level3GameMode::CalculateFinalScore()
{
	float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(LevelStartTimerHandle);
	Score += ((int32)TimeRemaining) * 10;
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
	SetIceCubePlaceHolders();

	/*UE_LOG(LogTemp, Warning, TEXT("%i"),IceCubePlaceHolderArr.Num());*/

	if (IceCubePlaceHolderArr.Num() == 0 && !bIsPathSet) // NN Exec block of code only if id=0
	{
		// CN set path so actions are not repeated
		bIsPathSet = true;
		SignalObjective();

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

