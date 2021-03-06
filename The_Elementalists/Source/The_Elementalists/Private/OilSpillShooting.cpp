// Fill out your copyright notice in the Description page of Project Settings.


#include "OilSpillShooting.h"
#include "Camera/CameraShakeBase.h"
#include "ChapterCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "OilProjectileSlow.h"
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
    if (bIsFrozen)
    {
        return;
    }
    bIsFrozen = true;

    ABaseGameMode* GameMode = Cast<ABaseGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode)
    {
        GameMode->ActorDied(this);
    }
    
    if (FreezeMaterial)
    {
        OilSpillMesh->SetMaterial(0, FreezeMaterial);
    }
    GetWorldTimerManager().ClearTimer(ShootingRateTimerHandle);
}

void AOilSpillShooting::BeginPlay()
{
    Super::BeginPlay();

    // NN Obtain map name
    MapName = GetWorld()->GetMapName();
    MapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);

    if (MapName == "Chapter_3_Level3")
    {
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), Characters);
    }
    else
    {
        PlayerCharacter = Cast<ACharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
    }



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

            AOilProjectileSlow* Proj = GetWorld()->SpawnActor<AOilProjectileSlow>(ProjectileClass, ProjectilePosition, FRotator(0, newrot.Yaw, 0));
            Proj->ScaleDamage(Difficulty);
            Proj->ScaleSlowTime(Difficulty);
            Proj->ProjectileMovementComponent->SetVelocityInLocalSpace(VelocityOutput);
            Proj->SetOwner(this);
        }
    }
}

bool AOilSpillShooting::InShootingRange() 
{
    if (MapName == "Chapter_3_Level3")
    {
        ClosestDist = 1000000.f;

        for (int i = 0; i < Characters.Num(); i++)
        {
            if (FVector::Dist(GetActorLocation(), Characters[i]->GetActorLocation()) < ClosestDist)
            {
                ClosestDist = FVector::Dist(GetActorLocation(), Characters[i]->GetActorLocation());
                PlayerCharacter = Cast<ACharacter>(Characters[i]);
            }
        }
    }
    return (FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation())) < ShootingRange;
}

void AOilSpillShooting::ScaleByDifficulty(int32 NewDifficulty)
{
    Difficulty = NewDifficulty;
}
