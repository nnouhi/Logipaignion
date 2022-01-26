// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1Flashback_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"

void AChapter1Flashback_AIController::BeginPlay()
{
	Super::BeginPlay();

	// NN Obtaining AI pawn reference
	AIPawn = GetPawn();

	// NN Obtain player pawn reference
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	// NN Populate array with scene's target points
	/*UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);*/
	
	// NN Populate the RightSideWaypoints with the waypoints that have the "Right" tag.
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("Right"), RightSideWaypoints);

	// NN Populate the RightSideWaypoints with the waypoints that have the "Left" tag.
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("Left"), LeftSideWaypoints);

	// NN Populate the RightSideWaypoints with the waypoints that have the "Right" tag.
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("RightFinal"), RightSideFinalWaypoints);

	// NN Populate the RightSideWaypoints with the waypoints that have the "Left" tag.
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("LeftFinal"), LeftSideFinalWaypoints);

	MoveToRandom();
}

void AChapter1Flashback_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


AActor* AChapter1Flashback_AIController::ChooseRandomWaypoint(TArray<AActor*> Waypoints)
{
	// Choose random waypoint in range 1 - size
	int32 index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Waypoints[index];

}

void AChapter1Flashback_AIController::MoveToRandom()
{

	if (AIPawn && PlayerPawn)
	{
		if (AIPawn->GetActorLocation().Y < PlayerPawn->GetActorLocation().Y) // NN AI is on the left of Player
		{
			MoveToActor(ChooseRandomWaypoint(LeftSideWaypoints));
		}
		else // NN AI is on the right of Player
		{
			MoveToActor(ChooseRandomWaypoint(RightSideWaypoints));
		}
	}	
}

void AChapter1Flashback_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (AIPawn && PlayerPawn && !bFinishMoving)
	{
		if (AIPawn->GetActorLocation().Y < PlayerPawn->GetActorLocation().Y) // NN AI is on the left of Player
		{
			MoveToActor(ChooseRandomWaypoint(LeftSideFinalWaypoints));
		}
		else // NN AI is on the right of Player
		{
			MoveToActor(ChooseRandomWaypoint(RightSideFinalWaypoints));
		}

		bFinishMoving = true;
	}
}
