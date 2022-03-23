// Fill out your copyright notice in the Description page of Project Settings.


#include "IceCube.h"

// Sets default values
AIceCube::AIceCube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	IceCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ice Cube Mesh"));
	RootComponent = IceCubeMesh;
}

// Called when the game starts or when spawned
void AIceCube::BeginPlay()
{
	Super::BeginPlay();

	IceCubeMesh->SetRelativeScale3D(FVector(Scale, Scale, Scale));
}

// Called every frame
void AIceCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


