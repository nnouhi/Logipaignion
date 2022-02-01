// Fill out your copyright notice in the Description page of Project Settings.


#include "FireProjectile.h"

#include "Camera/CameraShakeBase.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFireProjectile::AFireProjectile()
{

}

// Called when the game starts or when spawned
void AFireProjectile::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AFireProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AFireProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    AActor* MyOwner = GetOwner();
    if (MyOwner == nullptr)
    {
        Destroy();
        return;
    }

    AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
    UClass* DamageTypeClass = UDamageType::StaticClass();

    // CN Apply camera shake effect
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
        if (HitCameraShakeClass)
        {
            GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(HitCameraShakeClass);
        }
    }

    Destroy();
}