// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter2_AIController.h"
#include "ChapterCharacter.h"
#include "Kismet/Gameplaystatics.h"
#include "NavigationSystem.h"
#include "Engine/TargetPoint.h"

void AChapter2_AIController::BeginPlay()
{
	Super::BeginPlay();
	
	// NN Obtained references
	OwnerPawn = GetPawn();
	PlayerCharacter = Cast<AChapterCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("EscapeTag"), EscapeWaypoints);

	StartBehaviour();

}

void AChapter2_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPerformLineTrace) // Mask not yet equipped
	{
		if (PlayerCharacter)
		{
			if (FVector::Dist(OwnerPawn->GetActorLocation(), PlayerCharacter->GetActorLocation()) < ReachDistance)
			{
				PlayerCharacter->bPerformLineTrace = true;
			}
			// NN Aproach player only if he obtained that masks
			else if (FVector::Dist(OwnerPawn->GetActorLocation(), PlayerCharacter->GetActorLocation()) < MoveTowardsDistance && PlayerCharacter->GetMaskState())
			{
				// NN Move towards player
				FSMAIBehaviour = 2;
			}
			else
			{
				// NN Random movement
				FSMAIBehaviour = 1;
			}
		}
	}
	else // Mask equipped
	{
		FSMAIBehaviour = 3;
	}
	

}

void AChapter2_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (FSMAIBehaviour != 3)
	{
		GetWorldTimerManager().SetTimer(
			WaitTimeHandle,
			this,
			&AChapter2_AIController::StartBehaviour,
			WaitTime,
			false
		);
		return;
	}
	
	// NN TODO: When implementing levels gamemode increase counter of saved AI 
	OwnerPawn->Destroy();
}

void AChapter2_AIController::StartBehaviour()
{
	
	/**** --- STATES --- ****/
	// State = 1: Random Movement 
	// State = 2: Approach Player 
	// State = 3: Leavae to safe point

	if (FSMAIBehaviour == 1)
	{
		FNavLocation RandomNavigableLocation;
		// NN Obtain nav system reference
		UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
		NavigationSystem->GetRandomReachablePointInRadius(OwnerPawn->GetActorLocation(), NavigableRadius, RandomNavigableLocation);
		
		MoveToLocation(RandomNavigableLocation);
	}
	else if (FSMAIBehaviour == 2)
	{
		/*MoveTo(PlayerCharacter->GetActorLocation());*/
		MoveToActor(PlayerCharacter, 100.f);
	}
	else if (FSMAIBehaviour == 3)
	{
		MoveTo(EscapeWaypoints[FMath::RandRange(0,EscapeWaypoints.Num()-1)]->GetActorLocation());
	}
}
