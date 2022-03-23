// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ChapterCharacter.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AChapterCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AChapterCharacter();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // CN Shoot
    void Shoot();

	// CN Heal
	void Heal(float Amount);

    // CN To check if player is dead
    UFUNCTION(BlueprintPure)
    bool IsDead() const;

    // CN Get players health percentage
    UFUNCTION(BlueprintPure)
    float GetHealthPercentage() const;

    UPROPERTY(EditAnywhere)
    class ASwingDoor* CurrentDoor;

    UPROPERTY(EditAnywhere)
    class AInteractableItem* CurrentItem;

    bool bPerformLineTrace = false;
   
    UPROPERTY(EditAnywhere)
    class UUserWidget* InfoWidget;

    class AChapter_PlayerController* PlayerControllerRef;

    // Slow player down
    void SlowDown(float Percentage, float Time);

    // Set speed back to normal
    void SpeedUp();

private:
    // CN Move forwards/backwards
    void MoveForward(float AxisValue);
    
    // CN Move left/right
    void MoveRight(float AxisValue);
    
    // CN Start sprinting
    void BeginSprint();
    
    // CN Stop sprinting
    void EndSprint();

    // NN Performs line trace when appropriate
    void PerformLineTrace();

    // NN Invoked when 'E' is pressed
    void OnAction();

    // NN Spring arm comp
    UPROPERTY(EditAnywhere)
    class USpringArmComponent* SpringArmComp;
    
    // NN Camera comp
    UPROPERTY(EditAnywhere)
    class UCameraComponent* ThirdPersonCamera;
    
	// CN Regen rate
	UPROPERTY(EditAnywhere)
	float HealingPerSecond = 50.f;
	float HealthToReach = 100.f;
	bool bIsHealing = false;
	// CN Checks if healing and heals player
	void CheckAndHeal(float DeltaTime);
	
    // CN The players health component
    class UHealthComponent* HealthComponent;

    // CN The projectile spawn point
    UPROPERTY(EditAnywhere)
    USceneComponent* ProjectileSpawnPoint;

    // CN The type of projectile
    UPROPERTY(EditAnywhere)
    TSubclassOf<class AProjectile> ProjectileClass;

    //
    UPROPERTY(EditAnywhere)
    float LineTraceDistance = 200.f; // NN Can be tweaked from editor

    // NN Left mouse pressed?
    bool bFireButtonPressed = false;

    // NN True when player can fire, false when waiting for timer
    bool bShouldFire = true;

    // CN Slowed down, walk and sprint speeds
    float WalkSpeed = 600.f;
    float SprintSpeed = 1000.f;

    // CN Can sprint or not
    bool bCanSprint = true;

    // NN Rate of automatic fun fire
    UPROPERTY(EditAnywhere)
    float AutomaticFireRate = 0.3f;

    // NN Sets timer between shots
    FTimerHandle AutoFireTimer;

    // NN Slow character timer handle
    FTimerHandle SlowedDownTimerHandle;

    // NN Sets bFireButtonPressed to true and calls StartFireTimer()
    void FireButtonPressed();

    // NN Sets bFireButton pressed to false;
    void FireButtonReleased();

    /* NN Sets bShouldFire to false, fires the weapon and calls AutoFireReset()
     * after the AutomaticFireRate (0.3 sec) */
    void StartFireTimer();

    /* NN Sets bShouldFire to true and checks if player still holds the fire button(bFireButtonPressed),
     * if so call StartFireTimer() again */
    void AutoFireReset();

    // NN invokes player controller DisplayMap method
    void CallDisplayMap();

    // NN invokes player controller RemoveMap method
    void CallRemoveMap();

    // NN Kill actor when overlapped
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
         int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    // CN Enable/Disable sprinting
    FORCEINLINE void SetCanSprint(bool bNewValue) { bCanSprint = bNewValue; };

    UPROPERTY(EditAnywhere)
    UMaterial* Oil;

    TArray<UMaterialInterface*> Materials;
};