// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GasMaskBox.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AGasMaskBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGasMaskBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MaskMesh;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BoxMesh;

	class AChapterCharacter* CharRef;

	UPROPERTY(EditAnywhere)
		float ReachDistance = 400.f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact();

};