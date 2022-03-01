// Fill out your copyright notice in the Description page of Project Settings.


#include "IceProjectile.h"
#include "IceCollider.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "IceCube.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AIceProjectile::AIceProjectile()
{

}

// Called when the game starts or when spawned
void AIceProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AIceProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIceProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActor* MyOwner = GetOwner();
	if (MyOwner == nullptr)
	{
		Destroy();
		return;
	}

	AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();

	
		// CN Apply damage and spawn ice cube
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
			if (OtherActor->GetComponentByClass(UIceCollider::StaticClass()))
			{
				if (IceCubeClass)
				{
					FVector SpawnLocation = GetActorLocation();
					SpawnLocation.Z = (OtherActor->GetActorLocation()).Z + 0.01f;
					GetWorld()->SpawnActor<AIceCube>(IceCubeClass, SpawnLocation, FRotator(0.f, 0.f, 0.f));
				}
			}
		}

	Destroy();
}