// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

#include "Camera/CameraShakeBase.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Fire.h"

// Sets default values
AProjectile::AProjectile()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
    RootComponent = ProjectileMesh;

    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));

    ProjectileMovementComponent->InitialSpeed = 2000.f;
    ProjectileMovementComponent->MaxSpeed = 2000.f;

    Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
    Particles->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
    Super::BeginPlay();

    ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);

    if (LaunchSound)
    {
        UGameplayStatics::PlaySoundAtLocation(this, LaunchSound, GetActorLocation());
    }
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
   
}
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

    AActor* MyOwner = GetOwner();
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
        // NN play sound if water projectile hits fire (change later)
        if (OtherActor->IsA(AFire::StaticClass()))
        {
            AFire* FireRef = Cast<AFire>(OtherActor);
            if (FireRef)
            {
                FireRef->PlayHitSound();
            }
        }
        else
        {
            if (HitSound)
            {
                UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
                
            }
        }

        UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwnerInstigator, this, DamageTypeClass);
        if (HitParticles)
        {
            UGameplayStatics::SpawnEmitterAtLocation(this, HitParticles, GetActorLocation(), GetActorRotation());
        }
       
    }

    Destroy();
}
