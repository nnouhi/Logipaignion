// Fill out your copyright notice in the Description page of Project Settings.


#include "BoatAIController.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "Engine/TargetPoint.h"
#include "IceCubePlaceHolder.h"

ABoatAIController::ABoatAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABoatAIController::BeginPlay()
{
	Super::BeginPlay();

	SetWaypoints();
	SetPlaceHolders();

	AActor* NextWaypoint = GetNextWaypoint();
	if (NextWaypoint)
	{
		MoveToWaypoint(NextWaypoint);
	}
}

void ABoatAIController::SetWaypoints()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);

	// CN Sort waypoints
	if (Waypoints.Num() > 1)
	{
		bool bSwapped;
		int N = Waypoints.Num();
		do {
			bSwapped = false;
			N--;
			for (int32 i = 0; i < N; i++)
			{
				if (UKismetStringLibrary::Conv_StringToInt(Waypoints[i]->Tags[0].ToString()) > UKismetStringLibrary::Conv_StringToInt(Waypoints[i + 1]->Tags[0].ToString())) // FIX CAST TO INT
				{
					AActor* Temp = Waypoints[i];
					Waypoints[i] = Waypoints[i + 1];
					Waypoints[i + 1] = Temp;
					bSwapped = true;
				}
			}
		} while (bSwapped);

		// CN Debug check ok
		for (int32 i = 0; i < Waypoints.Num(); i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *(Waypoints[i]->Tags[0].ToString()));
		}
	}
}

void ABoatAIController::SetPlaceHolders()
{
	TArray<AActor*> PlaceHolders;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), PlaceHolders);

	// Hide all place holders
	for (AActor* PlaceHolder : PlaceHolders)
	{
		PlaceHolder->SetActorHiddenInGame(true);
	}
}

void ABoatAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsWaiting)
	{
		TArray<AActor*> PlaceHolders;
		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AIceCubePlaceHolder::StaticClass(), Waypoints[CurrentWaypointIndex - 1]->Tags[0], PlaceHolders);
		// CN If all placeholders removed
		if (PlaceHolders.Num() <= 0)
		{
			bIsWaiting = false;

			AActor* NextWaypoint = GetNextWaypoint();

			if (NextWaypoint)
			{
				UE_LOG(LogTemp, Warning, TEXT("Moving on!"));
				MoveToWaypoint(NextWaypoint);
			}

		}
	}
	else // CN Boat is moving
	{
		// CN Steer boat
		UStaticMeshComponent* Boat = Cast<UStaticMeshComponent>(GetPawn()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (Boat)
		{
			Boat->SetRelativeRotation(FMath::RInterpTo(Boat->GetComponentRotation(), TargetRotation, DeltaTime, 1.f));
		}
	}
}

void ABoatAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	bIsWaiting = true;
	UE_LOG(LogTemp, Warning, TEXT("Waiting..."));
}

AActor* ABoatAIController::GetNextWaypoint()
{
	if (CurrentWaypointIndex >= Waypoints.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Reached end."));
		return nullptr;
	}
	else
	{
		AActor* Waypoint = Waypoints[CurrentWaypointIndex];

		TArray<AActor*> PlaceHolders;
		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AIceCubePlaceHolder::StaticClass(), Waypoint->Tags[0], PlaceHolders);
		// CN Show current place holders
		for (AActor* PlaceHolder : PlaceHolders)
		{
			PlaceHolder->SetActorHiddenInGame(false);
		}

		CurrentWaypointIndex++;
		return Waypoint;
	}
}

void ABoatAIController::MoveToWaypoint(AActor* Waypoint)
{
	// CN Set target rotation
	FVector PawnLocation = GetPawn()->GetActorLocation();
	FVector WaypointLocation = Waypoint->GetActorLocation();
	FRotator Rotation = FRotator::ZeroRotator;
	Rotation.Yaw = (WaypointLocation - PawnLocation).Rotation().Yaw - 180; // CN -180 because boat will be backwards
	TargetRotation = Rotation;

	// CN Move boat
	MoveTo(Waypoint);
}