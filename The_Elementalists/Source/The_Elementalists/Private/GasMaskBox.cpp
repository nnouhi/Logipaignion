// Fill out your copyright notice in the Description page of Project Settings.


#include "GasMaskBox.h"

#include "BaseGameMode.h"
#include "ChapterCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGasMaskBox::AGasMaskBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CN Setup components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	Root->SetupAttachment(RootComponent);

	MaskMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mask Mesh"));
	MaskMesh->SetupAttachment(Root);

	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box Mesh"));
	BoxMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AGasMaskBox::BeginPlay()
{
	Super::BeginPlay();

	CharRef = Cast<AChapterCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void AGasMaskBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// NN If masks were not obtained perform line trace, other wise disable line trace for performance
	if (!bMaskObtained)
	{
		if (FVector::Dist(GetActorLocation(), UGameplayStatics::GetPlayerPawn(this, 0)->GetActorLocation()) < ReachDistance)
		{
			if (CharRef)
			{
				CharRef->bPerformLineTrace = true;
			}
		}
	}
	
}

void AGasMaskBox::Interact()
{
	ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		GameMode->ActorDied(this);
	}
	MaskMesh->SetVisibility(false, true);
	// NN Disable lt
	bMaskObtained = true;
}
