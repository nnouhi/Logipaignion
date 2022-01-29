// Fill out your copyright notice in the Description page of Project Settings.


#include "Minimap.h"
#include "Components/SceneCaptureComponent2D.h"


// Sets default values
AMinimap::AMinimap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// NN Set up root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetupAttachment(RootComponent);

	//// NN Set up scene capture
	//Minimap = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Capture Minimap"));
	//Minimap->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AMinimap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinimap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

