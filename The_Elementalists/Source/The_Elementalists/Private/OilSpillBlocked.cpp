// Fill out your copyright notice in the Description page of Project Settings.


#include "OilSpillBlocked.h"

#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AOilSpillBlocked::AOilSpillBlocked()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OilSpillMesh->SetRelativeScale3D(FVector(Scale, Scale, Height));
}

// Called when the game starts or when spawned
void AOilSpillBlocked::BeginPlay()
{
	Super::BeginPlay();

	OilSpillMesh->OnComponentHit.AddDynamic(this, &AOilSpillBlocked::OnHit);
}

// Called every frame
void AOilSpillBlocked::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// CN Grow
	Scale += DeltaTime / ScaleTime;

	if (OilSpillMesh)
	{
		OilSpillMesh->SetRelativeScale3D(FVector(Scale, Scale, Height));
	}
}


void AOilSpillBlocked::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	AActor* MyOwner = this;
	if (MyOwner == nullptr)
	{
		Destroy();
		return;
	}

	AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();

	// CN Apply damage and show effects
	if (OtherActor && OtherActor != this && OtherActor != MyOwner)
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwnerInstigator, this, DamageTypeClass);
	}
}