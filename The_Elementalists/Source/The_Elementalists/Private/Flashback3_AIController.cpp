// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashback3_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h"
#include "Boat.h"



AFlashback3_AIController::AFlashback3_AIController()
{
	// NN disable for now
	PrimaryActorTick.bCanEverTick = false;
	
	/*GetMesh()->DestroyComponent();
	GetMesh()->SetActive(false);*/
}

void AFlashback3_AIController::BeginPlay()
{
	Super::BeginPlay();

	AIBoat = GetPawn();

	// NN Destroy components not needed in AI
	Cast<ABoat>(GetPawn())->GetMapArm()->DestroyComponent();
	Cast<ABoat>(GetPawn())->GetSceneCapture()->DestroyComponent();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(),TEXT("ShoreWaypoints"), ShoreWaypoints);
	
	if (Waypoints.Num() != 0 && AIBoat)
	{
		int32 Index = 0;
		// NN Remove waypoints that are behind boat (Don't need to be navigated)
		for (AActor* Waypoint : Waypoints)
		{
			// NN Waypoint is behind boat
			if (AIBoat->GetActorLocation().Y <= Waypoint->GetActorLocation().Y)
			{
				Waypoints.Remove(Waypoint);
				Waypoints.Shrink();
			}
		}
		SmallestDistanceFromWaypoint = FVector::Dist(Waypoints[0]->GetActorLocation(), AIBoat->GetActorLocation());
		// NN Find closest waypoint to AI
		FindClosestWaypoint();
	}
}

void AFlashback3_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFlashback3_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (bInvokeMoveToShore)
	{
		MoveToShore();
		Waypoints.Empty();
	}
	else
	{
		if (Waypoints.Num() != 0)
		{
			Waypoints.RemoveAt(SmallestDistanceIndex);
			Waypoints.Shrink();
			WaypointClosestToAI = NULL;
			SmallestDistanceFromWaypoint = FVector::Dist(Waypoints[0]->GetActorLocation(), AIBoat->GetActorLocation());
			// NN Find closest waypoint to boat again
			FindClosestWaypoint();
		}
	}

	
	
}

void AFlashback3_AIController::FindClosestWaypoint()
{
	int32 WaypointIndex = 0;

	for (AActor* Waypoint : Waypoints)
	{
		// NN Waypoint is the closest to the AI out of all the waypoints
		if (FVector::Dist(Waypoint->GetActorLocation(),AIBoat->GetActorLocation()) <= SmallestDistanceFromWaypoint)
		{
			SmallestDistanceFromWaypoint = FVector::Dist(Waypoint->GetActorLocation(), AIBoat->GetActorLocation()); //set smallest distance
			WaypointClosestToAI = Waypoint; // new closest waypoint
			SmallestDistanceIndex = WaypointIndex; // get its index to remove later
			/*UE_LOG(LogTemp, Warning, TEXT("%f"), FVector::Dist(Waypoint->GetActorLocation(), AIBoat->GetActorLocation()));*/
		}
		WaypointIndex++;
	}

	if (WaypointClosestToAI) //set
	{
		// NN Since the waypoint that the AI will navigate to is the last destroy OnMoveComplete()
		if (WaypointClosestToAI->ActorHasTag(TEXT("LastWaypoint"))) bInvokeMoveToShore = true;
		MoveToClosestWaypoint(WaypointClosestToAI);
	}
}

void AFlashback3_AIController::MoveToClosestWaypoint(AActor* Waypoint)
{
	SetFocus(Waypoint);
	MoveTo(Waypoint);
}

void AFlashback3_AIController::MoveToShore()
{
	bInvokeMoveToShore = false;
	MoveTo(ShoreWaypoints[FMath::RandRange(0,ShoreWaypoints.Num()-1)]);

}


