// Fill out your copyright notice in the Description page of Project Settings.


#include "Medkit.h"

#include "ChapterCharacter.h"
#include "Components/BoxComponent.h"

// Sets default values
AMedkit::AMedkit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// CN Set up components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	Root->SetupAttachment(RootComponent);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision box"));
    Box->SetupAttachment(Root);
    Box->SetCollisionProfileName("Trigger");
	
	MedkitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Medkit Mesh"));
	MedkitMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AMedkit::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AMedkit::OnOverlapBegin);
}

// Called every frame
void AMedkit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMedkit::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	AChapterCharacter* HitActor = Cast<AChapterCharacter>(OtherActor); 
	
	if (HitActor) 
	{
		// CN Play collected sound
		
		// CN Heal player
		HitActor->Heal(Health);
		Destroy();
	}
}
