// Fill out your copyright notice in the Description page of Project Settings.


#include "FireWall.h"

#include "Components/BoxComponent.h"
#include "FlashbackCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFireWall::AFireWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CN Set up components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	Root->SetupAttachment(RootComponent);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision box"));
	Box->SetupAttachment(Root);
	Box->SetCollisionProfileName("Trigger");

	FireParticles1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles1"));
	FireParticles1->SetupAttachment(Root);
	FireParticles1->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	FireParticles1->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles2"));
	FireParticles2->SetupAttachment(Root);
	FireParticles2->SetRelativeLocation(FVector(50.f, 80.f, 0.f));
	FireParticles2->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles3"));
	FireParticles3->SetupAttachment(Root);
	FireParticles3->SetRelativeLocation(FVector(0.f, 160.f, 0.f));
	FireParticles3->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles4 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles4"));
	FireParticles4->SetupAttachment(Root);
	FireParticles4->SetRelativeLocation(FVector(-50.f, 240.f, 0.f));
	FireParticles4->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles5 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles5"));
	FireParticles5->SetupAttachment(Root);
	FireParticles5->SetRelativeLocation(FVector(-100.f, 320.f, 0.f));
	FireParticles5->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles6 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles6"));
	FireParticles6->SetupAttachment(Root);
	FireParticles6->SetRelativeLocation(FVector(-100.f, 400.f, 0.f));
	FireParticles6->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles7 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles7"));
	FireParticles7->SetupAttachment(Root);
	FireParticles7->SetRelativeLocation(FVector(-50.f, 480.f, 0.f));
	FireParticles7->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles8 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles8"));
	FireParticles8->SetupAttachment(Root);
	FireParticles8->SetRelativeLocation(FVector(-50.f, 560.f, 0.f));
	FireParticles8->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles9 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles9"));
	FireParticles9->SetupAttachment(Root);
	FireParticles9->SetRelativeLocation(FVector(0.f, 640.f, 0.f));
	FireParticles9->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	FireParticles10 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles10"));
	FireParticles10->SetupAttachment(Root);
	FireParticles10->SetRelativeLocation(FVector(50.f, 720.f, 0.f));
	FireParticles10->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
}

// Called when the game starts or when spawned
void AFireWall::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AFireWall::OnOverlapBegin);
}

// Called every frame
void AFireWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// CN Move forward relatively to the fire
	FVector Location = FVector::ZeroVector;
	Location.X -= Speed * DeltaTime;
	AddActorLocalOffset(Location, true);
}


void AFireWall::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFlashbackCharacter* HitActor = Cast<AFlashbackCharacter>(OtherActor);

	if (HitActor)
	{
		AController* MyOwnerInstigator = GetInstigatorController();
		UClass* DamageTypeClass = UDamageType::StaticClass();

		UGameplayStatics::ApplyDamage(HitActor, 1000000.f, MyOwnerInstigator, this, DamageTypeClass);
	}
}