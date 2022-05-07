// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Chapter3Level3_AIController.generated.h"

/**
 * 
 */
UCLASS()
class THE_ELEMENTALISTS_API AChapter3Level3_AIController : public AAIController
{
    GENERATED_BODY()

public:
    void MoveToBoat(AActor* Waypoint);
    
    void JumpToBoat(FVector BoatLocation, int32 Offset);

protected:
    virtual void BeginPlay() override;

    virtual void Tick(float DeltaTime) override;

    void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:

    APawn* AIPawn;
    class ABaseGameMode* GameMode;
    
    class AAICharacter* AICharacter;
    /*int32 EscapedAI = 0;*/

    void InvokePlaySound();

    FTimerHandle SoundHandle;

    bool bPlay = true;

   
};