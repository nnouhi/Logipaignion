// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingFire.h"

#include "Camera/CameraShakeBase.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Projectile.h"

// Sets default values
AShootingFire::AShootingFire()
{
    ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    ProjectileSpawnPoint->SetupAttachment(Root);
    ProjectileSpawnPoint->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
}

void AShootingFire::BeginPlay()
{
    Super::BeginPlay();

    GetWorldTimerManager().SetTimer(
        ShootingRateTimerHandle,
        this,
        &AShootingFire::Shoot,
        ShootingRate,
        true // loop
    );
}

void AShootingFire::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AShootingFire::Shoot() {

    if (InShootingRange())
    {
        if (ProjectileClass)
        {
            // CN Get spawner location
            FVector ProjectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
            // CN Get rotation based on position of character
            FVector Target = PlayerCharacter->GetActorLocation() - ProjectileSpawnPointLocation;
            FRotator ProjectileSpawnPointRotation = FRotator(10.f, Target.Rotation().Yaw, 0.f);

            AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPointLocation, ProjectileSpawnPointRotation);
            Projectile->SetOwner(this); // set the owner to the actor that fired it
        }
    }
}

bool AShootingFire::InShootingRange() const
{
    return (FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation())) < ShootingRange;
}

