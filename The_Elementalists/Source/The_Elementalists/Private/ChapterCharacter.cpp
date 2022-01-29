// Fill out your copyright notice in the Description page of Project Settings.


#include "ChapterCharacter.h"

#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HealthComponent.h"
#include "Projectile.h"

// Sets default values
AChapterCharacter::AChapterCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    //const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName("Muzzle_01");

    ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    ProjectileSpawnPoint->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Muzzle_01"));
    ProjectileSpawnPoint->SetRelativeLocation(FVector(50.f, 0.f, 0.f));

    // CN Create health component
    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
    AddOwnedComponent(HealthComponent);
}

// Called when the game starts or when spawned
void AChapterCharacter::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AChapterCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}
// Called to bind functionality to input
void AChapterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AChapterCharacter::MoveForward);
    PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
    PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AChapterCharacter::MoveRight);
    PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AChapterCharacter::Shoot);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AChapterCharacter::BeginSprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AChapterCharacter::EndSprint);
}

void AChapterCharacter::MoveForward(float AxisValue)
{
    AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AChapterCharacter::MoveRight(float AxisValue)
{
    AddMovementInput(GetActorRightVector() * AxisValue);
}

void AChapterCharacter::BeginSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = 1000.f;
}

void AChapterCharacter::EndSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

bool AChapterCharacter::IsDead() const
{
    if (HealthComponent)
    {
        return HealthComponent->Health <= 0.f;
    }
    return false;
}
float AChapterCharacter::GetHealthPercentage() const
{
    if (HealthComponent)
    {
        return HealthComponent->GetHealthPercentage();
    }
    return 0.f;
}

void AChapterCharacter::Shoot()
{
    if (ProjectileSpawnPoint)
    {
        // CN Get spawner location
        FVector ProjectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
        FRotator ProjectileSpawnPointRotation = ProjectileSpawnPoint->GetComponentRotation();

        if (ProjectileClass)
        {
            AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPointLocation, ProjectileSpawnPointRotation);
            Projectile->SetOwner(this); // set the owner to the actor that fired it
        }
    }
}

