// Fill out your copyright notice in the Description page of Project Settings.


#include "IceCubePlaceHolder.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "IceCube.h"
#include "OilSpillBlocked.h"
#include "BaseGameMode.h"

// Sets default values
AIceCubePlaceHolder::AIceCubePlaceHolder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));
	RootComponent = CubeMesh;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision box"));
	Box->SetupAttachment(RootComponent);
	Box->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void AIceCubePlaceHolder::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AIceCubePlaceHolder::OnOverlapBegin);

	SetupOilSpill();
	if (TargetOilSpill)
	{
		UE_LOG(LogTemp, Warning, TEXT("OK -------------------"));
		TargetOilSpill->IncrementPlaceHolders();
	}
}

// Called every frame
void AIceCubePlaceHolder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIceCubePlaceHolder::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AIceCube* HitActor = Cast<AIceCube>(OtherActor);

	if (HitActor)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit"));

		// CN Check that ice cube is covering at least half the volume
		if (FVector::Dist(GetActorLocation(), HitActor->GetActorLocation()) < CollisionDistance)
		{
			// CN Remove place holder for its oil spill
			if (TargetOilSpill)
			{
				TargetOilSpill->DecrementPlaceHolders();
				if (TargetOilSpill->IsBlocked())
				{
					ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(this));
					if (GameMode)
					{
						GameMode->ActorDied(TargetOilSpill);
					}
					Destroy();
					return;
				}
			}
			Destroy();
		}
	}
}

void AIceCubePlaceHolder::SetupOilSpill()
{
	TArray<AActor*> OilSpills;
	UGameplayStatics::GetAllActorsOfClass(this, AOilSpillBlocked::StaticClass(), OilSpills);

	for (AActor* Current : OilSpills)
	{
		AOilSpillBlocked* CurrentOilSpill = Cast<AOilSpillBlocked>(Current);

		// CN Check if current oil spill has the same tag as this
		if (CurrentOilSpill && this->Tags.Num() > 0 && CurrentOilSpill->ActorHasTag(this->Tags[0]))
		{
			// CN Set the target oil spill
			TargetOilSpill = CurrentOilSpill;
			break;
		}
	}
}