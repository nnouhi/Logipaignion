// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingFire.h"

#include "Camera/CameraShakeBase.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"

#include "GameFramework/ProjectileMovementComponent.h"
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
        ShootingRate + FMath::RandRange(0.f, 0.5f),// NN Add random delay to fire 
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
            //// CN Get spawner location
            //FVector ProjectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
            //// CN Get rotation based on position of character
            //FVector Target = PlayerCharacter->GetActorLocation() - ProjectileSpawnPointLocation;
            //FRotator ProjectileSpawnPointRotation = FRotator(10.f, Target.Rotation().Yaw, 0.f);

            //AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPointLocation, ProjectileSpawnPointRotation);
            //Projectile->SetOwner(this); // set the owner to the actor that fired it

       
            FVector TargetPosition = PlayerCharacter->GetActorLocation();
            FVector ProjectilePosition = ProjectileSpawnPoint->GetComponentLocation();
            FRotator newrot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPosition);
            
           
            // NN == Fixed Angle Projectile Velocity Calculation == 

            const float Gravity = GetWorld()->GetGravityZ() * -1; // gravity must be positive
            float Theta = (LaunchAngle * PI / 180); // convert to rad

            FVector direction = TargetPosition - ProjectilePosition; //direction

            float Sz = direction.Z;// height difference
            direction.Z = 0; // remove hight from direction
            float Sx = direction.Size();// distance

           
            const float V = (Sx / cos(Theta)) * FMath::Sqrt((Gravity * 1) / (2 * (Sx * tan(Theta) - Sz)));
            FVector VelocityOutput = FVector(V * cos(Theta), 0, V * sin(Theta));

            AProjectile* Proj = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectilePosition, FRotator(0, newrot.Yaw, 0));
                
            Proj->ProjectileMovementComponent->SetVelocityInLocalSpace(VelocityOutput);

            Proj->SetOwner(this); 
        }
    }
}

bool AShootingFire::InShootingRange() const
{
    return (FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation())) < ShootingRange;
}

