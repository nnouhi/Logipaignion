// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingToxicGas.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.h"

// Sets default values
AShootingToxicGas::AShootingToxicGas()
{
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(Root);
	ProjectileSpawnPoint->SetRelativeLocation(FVector(0.f, 0.f, 165.f));
}

void AShootingToxicGas::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		ShootingRateTimerHandle,
		this,
		&AShootingToxicGas::Shoot,
		ShootingRate,
		true // loop
	);
}

void AShootingToxicGas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AShootingToxicGas::Shoot() {

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

bool AShootingToxicGas::InShootingRange() const
{
	return (FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation())) < ShootingRange;
}