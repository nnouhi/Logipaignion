// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerCollisionProfileName.h"

// Sets default values for this component's properties
UTriggerCollisionProfileName::UTriggerCollisionProfileName()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;

    // ...
}


void UTriggerCollisionProfileName::ChangeCollisionProfileName()
{
    if (GetOwner())
    {
        UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(GetOwner()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
        if (Mesh)
        {
            Mesh->SetCollisionProfileName(TEXT("BlockAll"));
        }
    }

}

// Called when the game starts
void UTriggerCollisionProfileName::BeginPlay()
{
    Super::BeginPlay();

    // ...
    if (GetOwner())
    {
        UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(GetOwner()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
        if (Mesh)
        {
            UE_LOG(LogTemp, Warning, TEXT("SET"));
            Mesh->SetCollisionProfileName(TEXT("NoCollision"));
            Mesh->SetCollisionProfileName(TEXT("BlockAll"));
            Mesh->SetCollisionProfileName(TEXT("BlockAll"));
        }
    }
}


// Called every frame
void UTriggerCollisionProfileName::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}