// Fill out your copyright notice in the Description page of Project Settings.


#include "OilSpillShooting.h"
#include "Camera/CameraShakeBase.h"
#include "ChapterCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Projectile.h"
#include "BaseGameMode.h"

// Sets default values
AOilSpillShooting::AOilSpillShooting()
{
    ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    ProjectileSpawnPoint->SetupAttachment(Root);
    ProjectileSpawnPoint->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

void AOilSpillShooting::Freeze()
{
    // NN NOTE: Once Chapter3Level2 game mode is created uncomment line
    /*Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(GetWorld()))->ActorDied(this);*/
    
    if (FreezeMaterial)
    {
        OilSpillMesh->SetMaterial(0, FreezeMaterial);
    }
    GetWorldTimerManager().ClearTimer(ShootingRateTimerHandle);
}

void AOilSpillShooting::BeginPlay()
{
    Super::BeginPlay();

    PlayerCharacter = Cast<ACharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

    GetWorldTimerManager().SetTimer(
        ShootingRateTimerHandle,
        this,
        &AOilSpillShooting::Shoot,
        ShootingRate,
        true // loop
    );
}

void AOilSpillShooting::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AOilSpillShooting::Shoot() {

    if (InShootingRange())
    {
        if (ProjectileClass)
        {
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
            //Proj->SetSlowness();, set time
            Proj->ProjectileMovementComponent->SetVelocityInLocalSpace(VelocityOutput);
            Proj->SetOwner(this);
        }
    }
}

bool AOilSpillShooting::InShootingRange() const
{
    return (FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation())) < ShootingRange;
}