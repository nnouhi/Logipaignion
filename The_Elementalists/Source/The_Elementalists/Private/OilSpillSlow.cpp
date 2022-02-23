// Fill out your copyright notice in the Description page of Project Settings.


#include "OilSpillSlow.h"

#include "Components/SphereComponent.h"
#include "Boat.h"

// Sets default values
AOilSpillSlow::AOilSpillSlow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere collision"));
	Trigger->SetupAttachment(Root);
	Trigger->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

// Called when the game starts or when spawned
void AOilSpillSlow::BeginPlay()
{
	Super::BeginPlay();

	Trigger->OnComponentBeginOverlap.AddDynamic(this, &AOilSpillSlow::OnOverlapBegin);
	Trigger->OnComponentEndOverlap.AddDynamic(this, &AOilSpillSlow::OnOverlapEnd);
}

// Called every frame
void AOilSpillSlow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AOilSpillSlow::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABoat* HitActor = Cast<ABoat>(OtherActor);

	if (HitActor)
	{
		HitActor->SlowDown(SlowPercentage);
	}
}

void AOilSpillSlow::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABoat* HitActor = Cast<ABoat>(OtherActor);

	if (HitActor)
	{
		HitActor->SpeedUp();
	}
}