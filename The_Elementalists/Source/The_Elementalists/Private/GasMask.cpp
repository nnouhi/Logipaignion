// Fill out your copyright notice in the Description page of Project Settings.


#include "GasMask.h"

#include "Flashback2Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGasMask::AGasMask()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGasMask::BeginPlay()
{
	Super::BeginPlay();

	CharRef = Cast<AFlashback2Character>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void AGasMask::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FVector::Dist(GetActorLocation(), UGameplayStatics::GetPlayerPawn(this, 0)->GetActorLocation()) < ReachDistance)
	{
		if (CharRef)
		{
			CharRef->bPerformLineTrace = true;
		}
	}
}

