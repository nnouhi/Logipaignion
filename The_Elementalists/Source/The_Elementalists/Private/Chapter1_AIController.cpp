// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1_AIController.h"

#include "BaseGameMode.h"
#include "Engine/TargetPoint.h"
#include "SwingDoor.h"
#include "Kismet/GameplayStatics.h"

void AChapter1_AIController::BeginPlay()
{
	Super::BeginPlay();

	AActor* TempDoor= nullptr;
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	AIPawn = GetPawn();

	// NN Populate Waypoints & SwingDoors arrays 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASwingDoor::StaticClass(), SwingDoors);
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("EscapeTag"), EscapeWaypoints);

	for (AActor* SwingDoor : SwingDoors)
	{
		float dist = FVector::Dist(AIPawn->GetActorLocation(), SwingDoor->GetActorLocation());
		if ( dist < SmallestDistanceFromDoor)
		{
			SmallestDistanceFromDoor = dist;
			TempDoor = SwingDoor;
		}
	}

	ClosestDoor = Cast<ASwingDoor>(TempDoor);

}

void AChapter1_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ClosestDoor && ClosestDoor->bReadyState == false && bGetOut == false)
	{
		/*MoveToActor(FindClosestWaypoint());*/
		GetWorldTimerManager().SetTimer(
			MoveTimerHandle,
			this,
			&AChapter1_AIController::FindClosestWaypoint,
			FMath::RandRange(0.f, 0.5f),// NN Add random delay to move the AI
			false // loop
		);

		// CN Call ActorDied to update objective
		ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(this));
		if (GameMode)
		{
			GameMode->ActorDied(this);
		}

		/*FindClosestWaypoint();*/
		bGetOut = !bGetOut;
	}
}


void AChapter1_AIController::FindClosestWaypoint()
{
	
	int32 WaypointIndex = 0;

	for (AActor* Waypoint : Waypoints)
	{
		// NN Waypoint is on the left of player
		if (AIPawn->GetActorLocation().Y >= Waypoint->GetActorLocation().Y) //works
		{
			// NN Waypoint is the closest to the AI out of all the waypoints
			if (Waypoint->GetActorLocation().Y > SmallestDistanceFromWaypoint)
			{
				SmallestDistanceFromWaypoint = Waypoint->GetActorLocation().Y; //set smallest distance to waypoints Y
				TempWaypoint = Waypoint; // new closest waypoint
				SmallestDistanceIndex = WaypointIndex; // get its index to remove later
			}
		}
		WaypointIndex++;
	}

	// NN Typesafe
	if (TempWaypoint)
	{
		if (TempWaypoint->ActorHasTag("EscapeTag")) bMoveToEscapeWaypoint = true; // Destroy AI 
		SetFocus(TempWaypoint);
		MoveToActor(TempWaypoint);
		return;
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *TempWaypoint->GetName());

}

void AChapter1_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	// NN Destroy
	if (bMoveToEscapeWaypoint)
	{
		ChooseRandomEscapeWaypoint();
	}
	else if (bDestroy)
	{
		UE_LOG(LogTemp, Warning, TEXT("Destroyed"));
		AIPawn->Destroy();
	}
	else
	{
		SmallestDistanceFromWaypoint = -100000.f; // reset attribute to to temp value 
		Waypoints.RemoveAt(SmallestDistanceIndex); // remove the navigated waypoint from the array
		Waypoints.Shrink(); // free memory
		/*TempWaypoint->Destroy();*/
		TempWaypoint = nullptr; // reset TempWaypoint
		FindClosestWaypoint(); // move to next waypoint
	}
	
}

void AChapter1_AIController::ChooseRandomEscapeWaypoint()
{
	// NOTE: Not final version maybe will change later
	int RandomIndex = FMath::RandRange(0, EscapeWaypoints.Num() - 1);
	bDestroy = true;
	bMoveToEscapeWaypoint = false;
	SetFocus(EscapeWaypoints[RandomIndex]);
	MoveTo(EscapeWaypoints[RandomIndex]);
}
