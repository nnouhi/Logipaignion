// Fill out your copyright notice in the Description page of Project Settings.


#include "Endpoint.h"
#include "Components/BoxComponent.h"
#include "FlashbackCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Flash_Back.h"
// Sets default values
AEndpoint::AEndpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// NN RootComp set up
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	Root->SetupAttachment(RootComponent);

	// NN Set up collision box
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	Box->SetupAttachment(Root);
	Box->SetCollisionProfileName("Trigger");

	// NN Set up particle system
	EndpointParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Endpoint Particle"));
	EndpointParticle->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AEndpoint::BeginPlay()
{
	Super::BeginPlay();
	
	Box->OnComponentBeginOverlap.AddDynamic(this, &AEndpoint::OnOverlapBegin);
}

// Called every frame
void AEndpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEndpoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFlashbackCharacter* HitActor = Cast<AFlashbackCharacter>(OtherActor);
	AFlash_Back* FlashBackGameModeRef = Cast<AFlash_Back>(UGameplayStatics::GetGameMode(GetWorld()));

	if (HitActor)
	{
		if (FlashBackGameModeRef && !bLevelClear)
		{
			FlashBackGameModeRef->LevelComplete();
			bLevelClear = true;
		}
	}
	
}

