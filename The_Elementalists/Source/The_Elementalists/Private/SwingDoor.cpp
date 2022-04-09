// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingDoor.h"
#include "Components/TimelineComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "ChapterCharacter.h"

// Sets default values
ASwingDoor::ASwingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// NN Maybe delete later
	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Frame"));
	RootComponent = DoorFrame;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASwingDoor::BeginPlay()
{
	Super::BeginPlay();

	if (DoorCurve)
	{
		FOnTimelineFloat TimelineCallback;

		TimelineCallback.BindUFunction(this, FName("ControlDoor"));

		MyTimeline = NewObject<UTimelineComponent>(this, FName("DoorAnimation"));

		// NN Smoothly rotate the door
		MyTimeline->AddInterpFloat(DoorCurve, TimelineCallback);
		MyTimeline->RegisterComponent();
	}

	CharRef = Cast<AChapterCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

}

// Called every frame
void ASwingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MyTimeline != NULL)
	{
		MyTimeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
	}

	if (FVector::Dist(GetActorLocation(), UGameplayStatics::GetPlayerPawn(this, 0)->GetActorLocation()) < OpenDistance)
	{
		CharRef->bPerformLineTrace = true;
	}
}

void ASwingDoor::ControlDoor()
{
	// NN Update the door rotation relative to the Curve set in Editor
	TimelineValue = MyTimeline->GetPlaybackPosition();
	CurveFloatValue = RotateValue * DoorCurve->GetFloatValue(TimelineValue);
	FQuat NewRotation = FQuat(FRotator(0.f, CurveFloatValue, 0.f));

	// NN Update door's rotation
	Door->SetRelativeRotation(NewRotation);
}

void ASwingDoor::OpenDoor()
{
	// NN If door is not open
	if (bReadyState)
	{

		APawn* OurPawn = UGameplayStatics::GetPlayerPawn(this, 0);
		FVector PawnLocation = OurPawn->GetActorLocation();

		// NN Get the direction vector (Player to Door)
		FVector Direction = GetActorLocation() - PawnLocation;

		// NN Get result of vector A rotated by the inverse of Rotator B
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		if (Direction.X <= 0.0f)
		{
			RotateValue = -1.0f;
		}

		// NN Player curved timeline
		if (MyTimeline != NULL)
		{
			MyTimeline->PlayFromStart();
		}

		if (WhenDoorOpensSound)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), WhenDoorOpensSound, GetActorLocation());
		}
		bReadyState = false;
	}
}

