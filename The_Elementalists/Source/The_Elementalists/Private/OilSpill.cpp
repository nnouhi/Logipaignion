// Fill out your copyright notice in the Description page of Project Settings.


#include "OilSpill.h"

// Sets default values
AOilSpill::AOilSpill()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CN Setup components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	RootComponent = Root;

	OilSpillMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Oil Spill Mesh"));
	OilSpillMesh->SetupAttachment(Root);
	OilSpillMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

// Called when the game starts or when spawned
void AOilSpill::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AOilSpill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
