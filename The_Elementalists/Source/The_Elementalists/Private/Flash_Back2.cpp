// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back2.h"
#include "Kismet/Gameplaystatics.h"
#include "Flashback_PlayerController.h"
#include "Flashback2Character.h"
#include "ToxicGas.h"


AFlash_Back2::AFlash_Back2()
{

}

void AFlash_Back2::BeginPlay()
{
	Super::BeginPlay();

	FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	HandleGameStart();
}

void AFlash_Back2::HandleGameStart()
{
	SetupToxicGas();

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

void AFlash_Back2::MaskObtained()
{
	bMaskObtained = true;
	SignalObjective();
}

void AFlash_Back2::DisplayObjective()
{
	FlashbackCharacterController->StartTimer();
}

void AFlash_Back2::ProgressNextChapter()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AFlash_Back2::ActorDied(AActor* DeadActor)
{
	if (Cast<AFlashback2Character>(DeadActor))
	{
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
	
	if (FlashbackCharacterController)
	{
		FlashbackCharacterController->LevelClear();
	}
}

void AFlash_Back2::SetupToxicGas()
{
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


