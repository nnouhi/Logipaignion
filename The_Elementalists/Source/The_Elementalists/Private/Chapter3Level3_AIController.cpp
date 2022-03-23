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
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(),TEXT("8"), EscapeWaypointsArr);
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

	if (IceCubePlaceHolderArr.Num() == 0 && !bIsPathSet)
	{
		// CN set path so actions are not repeated
		bIsPathSet = true;

		for (int32 i = 0; i < PathCubeArr.Num(); i++)
		{
			ActorComp = PathCubeArr[i]->GetComponentByClass(UTriggerCollisionProfileName::StaticClass());
			ActorCompReference = Cast<UTriggerCollisionProfileName>(ActorComp);

			if (ActorComp)
			{
				UE_LOG(LogTemp, Warning, TEXT("Move"));

				ActorCompReference->ChangeCollisionProfileName();
				if (i == PathCubeArr.Num() - 1)
				{
					GetWorldTimerManager().SetTimer(
						GoHandle,
						this,
						&AChapter3Level3_AIController::Go,
						GoDelay,
						true);
				}
			}
		}
	}
	return;
}

void AChapter3Level3_AIController::Go()
{
	MoveTo(EscapeWaypointsArr[0]);
}