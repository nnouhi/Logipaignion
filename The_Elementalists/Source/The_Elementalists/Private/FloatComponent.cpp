// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatComponent.h"

// Sets default values for this component's properties
UFloatComponent::UFloatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFloatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFloatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// CN Move up and down as a sin wave
	FVector Location = FVector::ZeroVector;
	Location.Z += FMath::Sin(Angle) * Amount;
	Angle += DeltaTime;
	if (Angle > 180)
	{
		Angle = 0.f;
	}
	GetOwner()->AddActorWorldOffset(Location, true);
}

