// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter2InsideHouse_AIController.h"
#include "ChapterCharacter.h"
#include "Kismet/Gameplaystatics.h"
#include "Engine/TargetPoint.h"
#include "AICharacter.h"

void AChapter2InsideHouse_AIController::BeginPlay()
{
	Super::BeginPlay();

	// NN Obtained references
	OwnerPawn = GetPawn();
	PlayerCharacter = Cast<AChapterCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	AICharacter = Cast<AAICharacter>(OwnerPawn);
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATargetPoint::StaticClass(), TEXT("EscapeTag"), EscapeWaypoints);



	GetWorldTimerManager().SetTimer(
		SoundHandle,
		this,
		&AChapter2InsideHouse_AIController::InvokePlaySound,
		FMath::FRandRange(8.0f,12.0f),// NN Add random delay to move the AI
		true,
		FMath::FRandRange(8.0f, 15)
	);
}

void AChapter2InsideHouse_AIController::Tick(float DeltaTime)
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
		}
	}
	else // Mask equipped
	{
		if (!bMoveToInvoked) // NN Execute move to once since we are inside tick
		{
			bPlaySound = false;
			UE_LOG(LogTemp, Warning, TEXT("TESTING ELSE STATEMENT"));
			MoveTo(EscapeWaypoints[FMath::RandRange(0, EscapeWaypoints.Num() - 1)]->GetActorLocation());
			bMoveToInvoked = true;
		}
		
	}
}

void AChapter2InsideHouse_AIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	// NN TODO: When implementing levels gamemode increase counter of saved AI 
	OwnerPawn->Destroy();
}

void AChapter2InsideHouse_AIController::InvokePlaySound()
{
	if (bPlaySound && AICharacter)
	{
		AICharacter->PlaySound();
	}
}
