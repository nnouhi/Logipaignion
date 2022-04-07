// Fill out your copyright notice in the Description page of Project Settings.


#include "WindProjectile.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ChapterCharacter.h"

// Sets default values
AWindProjectile::AWindProjectile()
{

}

// Called when the game starts or when spawned
void AWindProjectile::BeginPlay()
{
	Super::BeginPlay();

	// CN Set to no gravity
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;

	ACharacter* Player = UGameplayStatics::GetPlayerCharacter(this, 0);
	Direction = (GetActorLocation() - Player->GetActorLocation()) / FVector::Dist(GetActorLocation(), Player->GetActorLocation());

	GetWorldTimerManager().SetTimer(
		DestroyTimerHandle,
		this,
		&AWindProjectile::Fade,
		DestroyTime,
		false // dont loop
	);
}

// Called every frame
void AWindProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWindProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActor* MyOwner = GetOwner();
	if (MyOwner == nullptr)
	{
		Destroy();
		return;
	}

	AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();

	// CN Apply damage
	if (OtherActor && OtherActor != this && OtherActor != MyOwner)
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwnerInstigator, this, DamageTypeClass);
		if (HitParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, HitParticles, GetActorLocation(), GetActorRotation());
		}
		if (HitSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
		}

		ACharacter* Player = UGameplayStatics::GetPlayerCharacter(this, 0);

		// UE_LOG(LogTemp, Warning, TEXT("Distance %f"), FVector::Dist(GetActorLocation(), Player->GetActorLocation()));
		if (Player && FVector::Dist(GetActorLocation(), Player->GetActorLocation()) < 200.f)
		{
			// CN If projectile is underneath player launch him up
			if (Player->GetActorLocation().Z > GetActorLocation().Z)
			{
				Player->LaunchCharacter(FVector(0.f, 0.f, LaunchForce * 1000.f), false, false);
			}
			else // Hit wall
			{
				Player->LaunchCharacter(1000.f * LaunchForce * (-Direction), false, false);
			}
		}

		// CN Push objects
		UStaticMeshComponent* OtherMesh = Cast<UStaticMeshComponent>(OtherActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (OtherMesh && OtherMesh->IsAnySimulatingPhysics())
		{
			OtherMesh->AddImpulse(ImpulseForce * 1000.f * OtherMesh->GetMass() * Direction);
		}
	}

	Destroy();
}

void AWindProjectile::Fade()
{
	Destroy();
}