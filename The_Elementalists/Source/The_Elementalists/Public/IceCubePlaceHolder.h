// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IceCubePlaceHolder.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AIceCubePlaceHolder : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AIceCubePlaceHolder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* CubeMesh;

	// CN Collision box
	UPROPERTY(EditAnywhere)
		class UBoxComponent* Box;

	// CN Handles collision with Ice Cube
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// CN Sets the target oil spill
	void SetupOilSpill();

	class AOilSpillBlocked* TargetOilSpill;

	float CollisionDistance = 100.f;

};
