// Fill out your copyright notice in the Description page of Project Settings.


#include "GasProjectile.h"

#include "ChapterCharacter.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AGasProjectile::AGasProjectile()
{

}

// Called when the game starts or when spawned
void AGasProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGasProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGasProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActor* MyOwner = GetOwner();
	if (MyOwner == nullptr)
	{
		Destroy();
		return;
	}

	AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();

	// CN Apply slowness
	if (OtherActor && OtherActor != this && OtherActor != MyOwner)
	{

		// UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwnerInstigator, this, DamageTypeClass);
		if (HitParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, HitParticles, GetActorLocation(), GetActorRotation());
		}
		if (HitSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation());
		}

		// CN Slow down player
		AChapterCharacter* Player = Cast<AChapterCharacter>(OtherActor);
		if (Player)
		{
			if (NauseaCameraShakeClass)
			{
				GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(NauseaCameraShakeClass);
			}
			Player->AddGasParticles(NauseaTime);
		}
	}

	Destroy();
}