// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GasMask.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AGasMask : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGasMask();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AFlashback2Character* CharRef;

	UPROPERTY(EditAnywhere)
		float ReachDistance = 400.f;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> InfoClass;
	UPROPERTY()
		class UUserWidget* InfoWidget;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
