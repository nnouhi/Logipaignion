// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerCollisionProfileName.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THE_ELEMENTALISTS_API UTriggerCollisionProfileName : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UTriggerCollisionProfileName();

    // NN When invoked change collision profile name
    void ChangeCollisionProfileName();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};