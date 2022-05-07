// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomLocationAIController.h"
//#include "Kismet/Gameplaystatics.h"
#include "NavigationSystem.h"
#include "AICharacter.h"


ARandomLocationAIController::ARandomLocationAIController()
{

}

void ARandomLocationAIController::BeginPlay()
{
	Super::BeginPlay();

	AIPawnReference = GetPawn();

	AICharacter = Cast<AAICharacter>(AIPawnReference);

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
	if (AICharacter)
	{
		if (FMath::RandRange(0, 15) == 5)
		{
			AICharacter->PlaySound();
		}
	}
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
