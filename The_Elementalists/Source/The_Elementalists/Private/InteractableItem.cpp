// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableItem.h"

#include "Blueprint/UserWidget.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInteractableItem::AInteractableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void AInteractableItem::BeginPlay()
{
	Super::BeginPlay();
	
	CharRef = Cast<AChapterCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void AInteractableItem::Tick(float DeltaTime)
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

void AInteractableItem::Interact()
{
	InfoWidget = CreateWidget(UGameplayStatics::GetPlayerController(this, 0), InfoClass);

	if (InfoWidget)
	{
		InfoWidget->AddToViewport();
	}
}
