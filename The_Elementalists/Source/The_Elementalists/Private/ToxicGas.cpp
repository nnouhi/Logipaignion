// Fill out your copyright notice in the Description page of Project Settings.

#include "ToxicGas.h"

#include "ChapterCharacter.h"
#include "Flashback2Character.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Character.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
AToxicGas::AToxicGas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CN Setup components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	Root->SetupAttachment(RootComponent);

	GasParticles1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("GasParticles1"));
	GasParticles1->SetupAttachment(Root);
	GasParticles1->SetRelativeLocation(FVector(-40.f, 40.f, 100.f));
	GasParticles1->SetRelativeScale3D(FVector(BaseScale, BaseScale, BaseScale));

	

	CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision Mesh"));
	CollisionMesh->SetupAttachment(Root);
	CollisionMesh->SetVisibility(false, true);

	// CN Create health component
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	AddOwnedComponent(HealthComponent);
}

// Called when the game starts or when spawned
void AToxicGas::BeginPlay()
{
	Super::BeginPlay();

	// CN Get character reference
	PlayerCharacter = Cast<ACharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	GasParticles1->SetRelativeScale3D(FVector(BaseScale, BaseScale, BaseScale));
	
}

// Called every frame
void AToxicGas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// CN Check to see if no more health then destroy
	if (HealthComponent)
	{
		if (HealthComponent->Health <= 0.f)
		{
			if (DeathParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticles, GetActorLocation(), GetActorRotation(), FVector(0.75f, 0.75f, 0.75f));
			}
			Destroy();
		}
	}
	if (PlayerCharacter)
	{
		float Distance = FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation());
		// CN Deal damage to player if in range
		if (Distance < DamageDistance)
		{
			AFlashback2Character* FlashbackCharacter = Cast<AFlashback2Character>(PlayerCharacter);
			if (FlashbackCharacter)
			{
				if (FlashbackCharacter->IsWearingMask())
				{
					DealDamage(DeltaTime, DamagePerSecond / 10.f);
				}
				else
				{
					DealDamage(DeltaTime, DamagePerSecond);

					if (NauseaCameraShakeClass)
					{
						GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(NauseaCameraShakeClass);
					}
					if (!FlashbackCharacter->IsCoughing())
					{
						FlashbackCharacter->Cough();
					}
					//FlashbackCharacter->Blur();
				}
			}
			else
			{
				AChapterCharacter* ChapterCharacter = Cast<AChapterCharacter>(PlayerCharacter);
				if (ChapterCharacter)
				{
					DealDamage(DeltaTime, DamagePerSecond);
				}
				if (NauseaCameraShakeClass)
				{
					GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(NauseaCameraShakeClass);
				}
			}
		}
		/*
		else
		{
			AFlashback2Character* FlashbackCharacter = Cast<AFlashback2Character>(PlayerCharacter);
			if (FlashbackCharacter)
			{
				FlashbackCharacter->UnBlur();
			}
		}*/
	}
}

void AToxicGas::DealDamage(float DeltaTime, float DPS)
{
	// Apply Damage
	AController* MyOwnerInstigator = GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();

	UGameplayStatics::ApplyDamage(PlayerCharacter, DPS * DeltaTime, MyOwnerInstigator, this, DamageTypeClass);
}

void AToxicGas::SetHealth(float Health)
{
	if (HealthComponent)
	{
		HealthComponent->MaxHealth = Health;
		HealthComponent->Health = Health;
	}
}

void AToxicGas::ScaleHealth(float Amount)
{
	if (HealthComponent)
	{
		HealthComponent->MaxHealth *= Amount;
		HealthComponent->Health = HealthComponent->MaxHealth;
	}
}