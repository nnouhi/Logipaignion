// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomLocationAIController.h"
//#include "Kismet/Gameplaystatics.h"
#include "NavigationSystem.h"


ARandomLocationAIController::ARandomLocationAIController()
{

}

void ARandomLocationAIController::BeginPlay()
{
	Super::BeginPlay();

	AIPawnReference = GetPawn();

	if (AIPawnReference)
	{
		MoveToRandomLocation();
	}
}

void ARandomLocationAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARandomLocationAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (AIPawnReference)
	{
		MoveToRandomLocation();
	}
}

void ARandomLocationAIController::MoveToRandomLocation()
{
	FNavLocation RandomNavigableLocation;

	// NN Obtain nav system reference
	UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
	NavigationSystem->GetRandomReachablePointInRadius(AIPawnReference->GetActorLocation(), NavigableRadius, RandomNavigableLocation);
	MoveToLocation(RandomNavigableLocation);
}
