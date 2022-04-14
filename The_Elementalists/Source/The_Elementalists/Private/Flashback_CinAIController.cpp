// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashback_CinAIController.h"
#include "Kismet/Gameplaystatics.h"
#include "Engine/TargetPoint.h"


void AFlashback_CinAIController::BeginPlay()
{
	Super::BeginPlay();

	AIPawn = GetPawn();

	if (FMath::RandBool())
	{
		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("LeftDestroy"), Waypoints);
	}
	else
	{
		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("RightDestroy"), Waypoints);
	}

	MoveTo(Waypoints[FMath::RandRange(0, Waypoints.Num() - 1)]->GetActorLocation());
}

void AFlashback_CinAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFlashback_CinAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	AIPawn->Destroy();
}


