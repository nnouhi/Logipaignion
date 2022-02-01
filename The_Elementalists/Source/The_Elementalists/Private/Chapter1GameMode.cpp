// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Flashback_PlayerController.h"
#include "FlashbackCharacter.h"

AChapter1GameMode::AChapter1GameMode()
{

}

void AChapter1GameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AChapter1GameMode::ProgressNextChapter()
{
    /*UGameplayStatics::OpenLevel(GetWorld(), TEXT("testLevel2"));*/
    UE_LOG(LogTemp, Warning, TEXT("Player progresses to next Chapter 1 level 2"));
}

void AChapter1GameMode::ActorDied(AActor* DeadActor)
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

FString AChapter1GameMode::GetObjectiveMessage()
{
	return TEXT("Avoid the raging flames and escape to the Nearby village");
}
