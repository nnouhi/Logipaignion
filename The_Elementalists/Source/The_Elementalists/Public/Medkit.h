// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Medkit.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AMedkit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMedkit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// CN Collision box
	UPROPERTY(EditAnywhere)
	class UBoxComponent* Box;
	
	// CN Root
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	
	// CN Mesh
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MedkitMesh;
	
	// CN Mesh
	UPROPERTY(EditAnywhere)
	float Health = 80.f;
	
	// CN Handles collision with pawn
	UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
