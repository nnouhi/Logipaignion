// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back.h"
#include "Kismet/GameplayStatics.h"
#include "Flashback_PlayerController.h"
#include "FlashbackCharacter.h"

AFlash_Back::AFlash_Back()
{

}

void AFlash_Back::BeginPlay()
{
    Super::BeginPlay();
}

FString AFlash_Back::GetObjectiveMessage()
{
	return TEXT("Avoid the raging flames and escape to the Nearby village");
}

void AFlash_Back::ProgressNextChapter()
{
	/*UGameplayStatics::OpenLevel(GetWorld(), TEXT("testLevel2"));*/
	UE_LOG(LogTemp, Warning, TEXT("Player progresses to next level"));
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
