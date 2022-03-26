// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter3Level3_AIController.h"
#include "Kismet/Gameplaystatics.h"
#include "BaseGameMode.h"


void AChapter3Level3_AIController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true; //off

	// NN Get AIPawn ref
	AIPawn = GetPawn();
	GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	
}

void AChapter3Level3_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AChapter3Level3_AIController::MoveToBoat(AActor* Waypoint)
{
	MoveTo(Waypoint);
}

void AChapter3Level3_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	/*EscapedAI++;*/
	// IMPLMENT WITH ACTORDIED 
	
	GameMode->ActorDied(AIPawn);
}

