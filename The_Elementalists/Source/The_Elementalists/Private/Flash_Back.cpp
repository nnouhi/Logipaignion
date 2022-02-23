// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back.h"
#include "Kismet/GameplayStatics.h"
#include "Flashback_PlayerController.h"
#include "FlashbackCharacter.h"
#include "Fire.h"

AFlash_Back::AFlash_Back()
{

}

void AFlash_Back::BeginPlay()
{
    Super::BeginPlay();

	HandleGameStart();
}

FString AFlash_Back::GetObjectiveMessage()
{
	return TEXT("Avoid the raging flames and escape to the nearby village!");
}

FString AFlash_Back::GetChapterName()
{
    return TEXT("Wraith's Flashback");
}

void AFlash_Back::ProgressNextChapter()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));
}

void AFlash_Back::ActorDied(AActor* DeadActor)
{
    // CN MUST CHANGE TO GENERAL CHARACTER
    if (Cast<AFlashbackCharacter>(DeadActor))
    {
        AFlashback_PlayerController* FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
        if (FlashbackCharacterController)
        {
            FlashbackCharacterController->GameOver();
        }
    }
}

void AFlash_Back::LevelComplete()
{
	UE_LOG(LogTemp, Warning, TEXT("%i"), GetTotalScore());
	AddToTotalScore(GetScore());
	UE_LOG(LogTemp, Warning, TEXT("%i"), GetTotalScore());

    AFlashback_PlayerController* FlashbackCharacterController = Cast<AFlashback_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
    if (FlashbackCharacterController)
    {
        FlashbackCharacterController->LevelClear();
    }
}


void AFlash_Back::HandleGameStart()
{
	SetupFires();

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

void AFlash_Back::SetupFires() {
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
}

int32 AFlash_Back::GetScore() 
{
	return 100 * GetDifficulty();
}