// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IceCube.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AIceCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIceCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* IceCubeMesh;

	// CN Initial ice cube scale
	UPROPERTY(EditAnywhere)
	float Scale = 1.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
