// Fill out your copyright notice in the Description page of Project Settings.


#include "InForest_AIController.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/UnrealString.h"
#include "Math/Vector.h"

void AInForest_AIController::BeginPlay()
{
	Super::BeginPlay();
	
	// NN Populate the RightSideWaypoints with the waypoints that have the "Right" tag.
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("InForestPoint"), InForestWaypoints);

	// NN get AI reference
	AIPawn = GetPawn();

	// NN get player character
	PlayerCharacter = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
	
	/*if (TargetPoint + FString::FromInt(TargetPointIndex) == InForestWaypoints[0]->GetActorLabel())
	{
		UE_LOG(LogTemp, Warning, TEXT("Concatenated"));
	}*/
	
	MoveToActor(ChooseWaypoint());
	
}

void AInForest_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*float testDist = FVector::Dist(AIPawn->GetActorLocation(), PlayerCharacter->GetActorLocation());
	UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), testDist);*/


	if (bKeepCheckingDistance)
	{
		float dist = FVector::Dist(AIPawn->GetActorLocation(), PlayerCharacter->GetActorLocation());
		if (dist < 500.f)
		{
			AActor* Waypoint = ChooseWaypoint();
			bKeepCheckingDistance = false;
			SetFocus(Waypoint);
			MoveToActor(Waypoint);
		}
	}
}

AActor* AInForest_AIController::ChooseWaypoint()
{
	for (AActor* Waypoint : InForestWaypoints)
	{
		if (TargetPoint + FString::FromInt(TargetPointIndex) == Waypoint->GetName())
		{
			TargetPointIndex++;
			return Waypoint;
		}
	}
	return 0;
}

void AInForest_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	
	float dist = FVector::Dist(AIPawn->GetActorLocation(), PlayerCharacter->GetActorLocation());
	
	if (bKeepCheckingDistance == false)
	{
		if (dist > ValidDistancePlayerAI)
		{
			SetFocus(PlayerCharacter);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), CallingSounds, AIPawn->GetActorLocation());
			
			bKeepCheckingDistance = true;
		}
		else
		{
			AActor* Waypoint = ChooseWaypoint();
			SetFocus(Waypoint);
			MoveToActor(Waypoint);
		}
	}
	
}
