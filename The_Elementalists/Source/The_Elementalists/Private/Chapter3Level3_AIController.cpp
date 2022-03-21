// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter3Level3_AIController.h"
#include "TriggerCollisionProfileName.h"
#include "IceCubePlaceHolder.h"
#include "Engine/TargetPoint.h"
#include "Kismet/Gameplaystatics.h"


void AChapter3Level3_AIController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true; //off

	// NN Get AIPawn ref
	AIPawn = GetPawn();

	// NN Get all ice cubes & Path cube
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), IceCubePlaceHolderArr);
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(),TEXT("4"), EscapeWaypointsArr);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Path"), PathCubeArr);

	// NN Check every ... of seconds how many placeholders remain
	GetWorldTimerManager().SetTimer(
		CheckPlaceHoldersHandle,
		this,
		&AChapter3Level3_AIController::CheckPlaceHolders,
		CheckPlaceHoldersInRate,
		true);

}

void AChapter3Level3_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChapter3Level3_AIController::CheckPlaceHolders()
{
	// NN All place holders were filled/destroyed (path is created)
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AIceCubePlaceHolder::StaticClass(), IceCubePlaceHolderArr);

	UE_LOG(LogTemp, Warning, TEXT("%i"),IceCubePlaceHolderArr.Num());

	if (IceCubePlaceHolderArr.Num() == 0)
	{
		ActorComp = PathCubeArr[0]->GetComponentByClass(UTriggerCollisionProfileName::StaticClass());
		ActorCompReference = Cast<UTriggerCollisionProfileName>(ActorComp);

		if (ActorComp)
		{
			UE_LOG(LogTemp, Warning, TEXT("Move"));

			ActorCompReference->ChangeCollisionProfileName();
			MoveTo(EscapeWaypointsArr[0]);
			return;
		}
	}
	return;
}
