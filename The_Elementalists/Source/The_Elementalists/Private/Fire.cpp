#include "Fire.h"
#include "Components/BoxComponent.h"
#include "FlashbackCharacter.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
AFire::AFire()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // CN Setup components
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
    Root->SetupAttachment(RootComponent);

    FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));
    FireParticles->SetupAttachment(Root);
    FireParticles->SetRelativeLocation(FVector(-110.f, 0.f, 0.f));
    FireParticles->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));

}

// Called when the game starts or when spawned
void AFire::BeginPlay()
{
    Super::BeginPlay();

    // CN Get character reference
    FlashbackCharacter = Cast<AFlashbackCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

    // CN 1 in 3 fires will explode
    if (FMath::RandRange(0, ExplosionChance) > 0)
    {
        bHasExploded = true;
    }

}
// Called every frame
void AFire::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float Distance = FVector::Dist(GetActorLocation(), FlashbackCharacter->GetActorLocation());

    // CN Deal damage to player
    if (Distance < DamageDistance)
    {
        // Apply Damage
        AController* MyOwnerInstigator = GetInstigatorController();
        UClass* DamageTypeClass = UDamageType::StaticClass();

        UGameplayStatics::ApplyDamage(FlashbackCharacter, DamagePerSecond * DeltaTime, MyOwnerInstigator, this, DamageTypeClass);
    }

    // CN Explode
    if (!bHasExploded && Distance < ExplosionDistance)
    {
        if (ExplosionParticles)
        {
            UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionParticles, GetActorLocation(), GetActorRotation());
        }
        if (HitCameraShakeClass)
        {
            GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(HitCameraShakeClass);
        }
        if (RandomizedExplosion)
        {
            UE_LOG(LogTemp, Warning, TEXT("Play sound test"));
            /*UGameplayStatics::PlaySound2D(this, RandomizedExplosion);*/
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), RandomizedExplosion, GetActorLocation());
        }
        bHasExploded = true;
    }

}