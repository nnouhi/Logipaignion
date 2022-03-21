// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter3Level3_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter3Level3_AIController : public AAIController
{
	GENERATED_BODY()

public:

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:

	APawn* AIPawn;

	TArray<AActor*> IceCubePlaceHolderArr;
	TArray<AActor*> EscapeWaypointsArr;
	TArray<AActor*> PathCubeArr;

	FTimerHandle CheckPlaceHoldersHandle;

	// NN How frequent to check for placeholers number
	UPROPERTY(EditAnywhere)
	float CheckPlaceHoldersInRate = 5.f;
	
	void CheckPlaceHolders();

	class UActorComponent* ActorComp;

	class UTriggerCollisionProfileName* ActorCompReference;
};
