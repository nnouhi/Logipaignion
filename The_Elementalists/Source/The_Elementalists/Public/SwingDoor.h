// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwingDoor.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API ASwingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// NN will act as root comp
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DoorCurve;

	// NN Open distance if distance (player - door) > OpenDistance
	UPROPERTY(EditAnywhere)
	float OpenDistance = 150.f; // NN Can be tweaked later

	// NN Handles door rotation
	UFUNCTION()
	void ControlDoor();

	// NN Method that is called from the Character class to trigger door opening
	UFUNCTION()
	void OpenDoor();


	bool bReadyState = true;
	
	float RotateValue = 1.f;
	
	float CurveFloatValue;
	
	float TimelineValue;
	
	class UTimelineComponent* MyTimeline;

	class AChapterCharacter* CharRef;

	UPROPERTY(EditAnywhere)
	class USoundBase* WhenDoorOpensSound;


};
