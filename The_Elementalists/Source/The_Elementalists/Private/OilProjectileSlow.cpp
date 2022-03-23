// Fill out your copyright notice in the Description page of Project Settings.


#include "OilProjectileSlow.h"
#include "ChapterCharacter.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
AOilProjectileSlow::AOilProjectileSlow()
{

}

// Called when the game starts or when spawned
void AOilProjectileSlow::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AOilProjectileSlow::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AOilProjectileSlow::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    AActor* MyOwner = GetOwner();
    if (MyOwner == nullptr)
    {
        Destroy();
        return;
    }

    AController* MyOwnerInstigator = MyOwner->GetInstigatorController();
    UClass* DamageTypeClass = UDamageType::StaticClass();

    // CN Apply slowness && damage
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

        // CN Slow down player
        AChapterCharacter* Player = Cast<AChapterCharacter>(OtherActor);
        if (Player)
        {
            Player->SlowDown(Slowness, SlowTime);
        }
    }

    Destroy();
}