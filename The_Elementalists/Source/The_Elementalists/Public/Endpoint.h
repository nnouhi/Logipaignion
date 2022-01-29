// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Endpoint.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AEndpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEndpoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	// NN Collision box
	UPROPERTY(EditAnywhere)
	class UBoxComponent* Box;

	// NN SceneComponent that will act as the root
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	// NN Handles collision with player character
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// NN Particle Component
	UPROPERTY(VisibleAnywhere)
	class UParticleSystemComponent* EndpointParticle;
};
