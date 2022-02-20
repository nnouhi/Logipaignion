// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableItem.generated.h"

UCLASS()
class THE_ELEMENTALISTS_API AInteractableItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

private:
	class AChapterCharacter* CharRef;

	UPROPERTY(EditAnywhere)
	float ReachDistance = 400.f;


	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> InfoClass;
	UPROPERTY()
	class UUserWidget* InfoWidget;

};
