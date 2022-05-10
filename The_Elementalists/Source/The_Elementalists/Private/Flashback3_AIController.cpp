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
		
		// NN Remove waypoints that are behind boat (Don't need to be navigated)
		for (int32 i=0; i<Waypoints.Num(); i++)
		{
			
			WaypointsFlag.Add(true);
			// NN Waypoint is behind boat
			if (AIBoat->GetActorLocation().Y <= Waypoints[i]->GetActorLocation().Y)
			{
				WaypointsFlag[i] = false;
			}
		}

		for (int32 i = 0; i < Waypoints.Num(); i++)
		{
			if (WaypointsFlag[i] == true)
			{
				SmallestDistanceFromWaypoint = FVector::Dist(Waypoints[i]->GetActorLocation(), AIBoat->GetActorLocation());
				break;
			}	
		}
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
			WaypointsFlag[SmallestDistanceIndex] = false;

			for (int32 i = 0; i < Waypoints.Num(); i++)
			{
				if (WaypointsFlag[i] == true)
				{
					SmallestDistanceFromWaypoint = FVector::Dist(Waypoints[i]->GetActorLocation(), AIBoat->GetActorLocation());
					break;
				}
			}
			WaypointClosestToAI = NULL;

			
			// NN Find closest waypoint to boat again
			FindClosestWaypoint();
		}
	}

	
	
}

void AFlashback3_AIController::FindClosestWaypoint()
{

	for (int32 i = 0; i < Waypoints.Num(); i++)
	{
		if (WaypointsFlag[i])
		{
			// NN Waypoint is the closest to the AI out of all the waypoints
			if (FVector::Dist(Waypoints[i]->GetActorLocation(), AIBoat->GetActorLocation()) <= SmallestDistanceFromWaypoint)
			{
				SmallestDistanceFromWaypoint = FVector::Dist(Waypoints[i]->GetActorLocation(), AIBoat->GetActorLocation()); //set smallest distance
				WaypointClosestToAI = Waypoints[i]; // new closest waypoint
				SmallestDistanceIndex = i; // get its index to remove later
			}
		}
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
	int32 choice = FMath::RandRange(0, ShoreWaypoints.Num() - 1);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *ShoreWaypoints[choice]->GetName());
	MoveTo(ShoreWaypoints[choice]);

}


