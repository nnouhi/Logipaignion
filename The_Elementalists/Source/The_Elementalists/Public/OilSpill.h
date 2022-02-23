// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OilSpill.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AOilSpill : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOilSpill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* OilSpillMesh;

	// CN Root
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};