// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter1_AIController.h"
#include "Engine/TargetPoint.h"
#include "SwingDoor.h"
#include "Kismet/GameplayStatics.h"

void AChapter1_AIController::BeginPlay()
{
	Super::BeginPlay();

	AActor* TempActor = nullptr;
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	AIPawn = GetPawn();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASwingDoor::StaticClass(), SwingDoors);


	for (AActor* SwingDoor : SwingDoors)
	{
		float dist = FVector::Dist(AIPawn->GetActorLocation(), SwingDoor->GetActorLocation());
		if ( dist < SmallestDistance)
		{
			SmallestDistance = dist;
			TempActor = SwingDoor;
		}
	}

	ClosestDoor = Cast<ASwingDoor>(TempActor);

}

void AChapter1_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ClosestDoor && ClosestDoor->bReadyState == false && bGetOut == false)
	{
		MoveToActor(GetRandomWaypoint());
		bGetOut = !bGetOut;
	}
}

void AChapter1_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	AIPawn->Destroy();
}

AActor* AChapter1_AIController::GetRandomWaypoint()
{
	return Waypoints[FMath::RandRange(0, Waypoints.Num() - 1)];
}
