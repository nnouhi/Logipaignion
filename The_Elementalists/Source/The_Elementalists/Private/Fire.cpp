// Fill out your copyright notice in the Description page of Project Settings.


#include "Fire.h"

#include "Components/BoxComponent.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Character.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFire::AFire()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // CN Setup components
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
    Root->SetupAttachment(RootComponent);

    FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));
    FireParticles->SetupAttachment(Root);
    FireParticles->SetRelativeLocation(FVector(-110.f, 0.f, 0.f));
    FireParticles->SetRelativeScale3D(FVector(BaseScale, BaseScale, BaseScale));

    CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision Mesh"));
    CollisionMesh->SetupAttachment(Root);
    CollisionMesh->SetVisibility(false, true);

    // CN Create health component
    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
    AddOwnedComponent(HealthComponent);
}

void AFire::PlayHitSound()
{
    if (RandomizedFireHit)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), RandomizedFireHit, GetActorLocation());
    }
}

// Called when the game starts or when spawned
void AFire::BeginPlay()
{
    Super::BeginPlay();

    // CN Get character reference
    PlayerCharacter = Cast<ACharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

    // CN 1 in 3 fires will explode
    if (FMath::RandRange(0, ExplosionChance) > 0)
    {
        bHasExploded = true;
    }

    Scale = BaseScale;
    FireParticles->SetRelativeScale3D(FVector(BaseScale, BaseScale, BaseScale));

}

// Called every frame
void AFire::Tick(float DeltaTime)
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
                Destroy();
            }
        }
    }

    // CN Shrink gradually based on health
    if (Scale > HealthComponent->GetHealthPercentage() * BaseScale)
    {
        Scale -= DeltaTime * 2;
        FireParticles->SetRelativeScale3D(FVector(Scale, Scale, Scale));
    }

    float Distance = FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation());
    // CN Deal damage to player if in range
    if (Distance < DamageDistance)
    {
        DealDamage(DeltaTime);
    }

    // CN Explode
    if (!bHasExploded && Distance < ExplosionDistance && HealthComponent->GetHealthPercentage() > 0.5)
    {
        Explode();
    }
}

void AFire::DealDamage(float DeltaTime)
{
    // Apply Damage
    AController* MyOwnerInstigator = GetInstigatorController();
    UClass* DamageTypeClass = UDamageType::StaticClass();

    UGameplayStatics::ApplyDamage(PlayerCharacter, DamagePerSecond * DeltaTime, MyOwnerInstigator, this, DamageTypeClass);
}

void AFire::Explode()
{
    if (ExplosionParticles)
    {
        UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionParticles, GetActorLocation(), GetActorRotation());
    }
    if (HitCameraShakeClass)
    {
        GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(HitCameraShakeClass);
    }
    if (RandomizedExplosion)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), RandomizedExplosion,GetActorLocation());
    }
    bHasExploded = true;
}