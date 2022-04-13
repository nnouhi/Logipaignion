// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back3.h"
#include "Kismet/GameplayStatics.h"
#include "Flashback_PlayerController.h"
#include "Boat.h"


AFlash_Back3::AFlash_Back3()
{

}

void AFlash_Back3::BeginPlay()
{
	Super::BeginPlay();

	FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));


	HandleGameStart();
}

FString AFlash_Back3::GetObjectiveMessage()
{
	return TEXT("Avoid the growing oil spill and escape to the shore!");
}

FString AFlash_Back3::GetChapterName()
{
	return TEXT("Murdock's Flashback");
}

void AFlash_Back3::ProgressNextChapter()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AFlash_Back3::ActorDied(AActor* DeadActor)
{
	// CN MUST CHANGE TO GENERAL CHARACTER
	if (Cast<ABoat>(DeadActor))
	{
		if (FlashbackCharacterController)
		{
			FlashbackCharacterController->GameOver();
		}
	}
}

void AFlash_Back3::LevelComplete()
{
	//UE_LOG(LogTemp, Warning, TEXT("%i"), GetTotalScore());
	AddToTotalScore(GetScore());
	//UE_LOG(LogTemp, Warning, TEXT("%i"), GetTotalScore());

	if (FlashbackCharacterController)
	{
		FlashbackCharacterController->LevelClear();
	}
}


void AFlash_Back3::HandleGameStart()
{
	SetupOilSpill();

	// CN Start countdown until level starts
	if (FlashbackCharacterController)
	{
		FTimerHandle PlayerWaitTimerHandle;
		FTimerDelegate PlayerWaitTimerDelegate = FTimerDelegate::CreateUObject(
			FlashbackCharacterController,
			&AFlashback_PlayerController::StartLevel
		);

		GetWorldTimerManager().SetTimer(
			PlayerWaitTimerHandle,
			PlayerWaitTimerDelegate,
			StartDelay,
			false
		);

	}
}

void AFlash_Back3::DisplayObjective()
{
	FlashbackCharacterController->StartTimer();
}

void AFlash_Back3::SetupOilSpill() {
	/*
	TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);

	for (AActor* Current : Fires)
	{
		AFire* CurrentFire = Cast<AFire>(Current);
		if (CurrentFire)
		{
			CurrentFire->ScaleDamagePerSecond(GetDifficulty());
		}
	}
	*/
}

int32 AFlash_Back3::GetScore()
{
	return 100 * GetDifficulty();
}