// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back2.h"
#include "Kismet/Gameplaystatics.h"
#include "Flashback_PlayerController.h"
#include "Flashback2Character.h"


AFlash_Back2::AFlash_Back2()
{

}

void AFlash_Back2::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

void AFlash_Back2::HandleGameStart()
{
	// CN Start countdown until level starts
	AFlashback_PlayerController* FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
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

		FlashbackCharacterController->StartTimer();
	}
}

void AFlash_Back2::MaskObtained()
{
	bMaskObtained = true;
	SignalObjective();
}

void AFlash_Back2::ProgressNextChapter()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AFlash_Back2::ActorDied(AActor* DeadActor)
{
	if (Cast<AFlashback2Character>(DeadActor))
	{
		AFlashback_PlayerController* FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
		if (FlashbackCharacterController)
		{
			FlashbackCharacterController->GameOver();
		}
	}
}

FString AFlash_Back2::GetObjectiveMessage()
{
	if (bMaskObtained)
	{
		return TEXT("Escape the house and reach your family!");
	}

	return TEXT("Avoid the poisonous gas and find the gas mask!");
}

FString AFlash_Back2::GetChapterName()
{
	return TEXT("Revenant's Flashback");
}

int32 AFlash_Back2::GetScore()
{
	return 100 * GetDifficulty();
}

void AFlash_Back2::LevelComplete()
{
	
	AddToTotalScore(GetScore());
	
	AFlashback_PlayerController* FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (FlashbackCharacterController)
	{
		FlashbackCharacterController->LevelClear();
	}
}

void AFlash_Back2::SetupToxicGas()
{
	// TODO 
	/*TArray<AActor*> Fires;
	UGameplayStatics::GetAllActorsOfClass(this, AFire::StaticClass(), Fires);

	for (AActor* Current : Fires)
	{
		AFire* CurrentFire = Cast<AFire>(Current);
		if (CurrentFire)
		{
			CurrentFire->ScaleDamagePerSecond(GetDifficulty());
		}
	}*/
}


