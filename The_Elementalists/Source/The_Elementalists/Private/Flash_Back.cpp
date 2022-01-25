// Fill out your copyright notice in the Description page of Project Settings.


#include "Flash_Back.h"
#include "Kismet/GameplayStatics.h"

AFlash_Back::AFlash_Back()
{

}

void AFlash_Back::BeginPlay()
{
	// NN Find out in which chapter player is
	FString ChapterName = GetChapterName();

	// NN Populate ObjetiveMessage according to which chapter player is 
	SetObjectiveMessage(ChapterName);
}

FString AFlash_Back::GetChapterName()
{
	FString LevelName = GetWorld()->GetMapName();
	// NN Remove the UEDPIE prefix
	LevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	return LevelName;
}

void AFlash_Back::SetObjectiveMessage(const FString& ChapterName)
{
	// NN According to flashback chapter display its objective
	if (ChapterName.Equals("Chapter_1_Flashback"))
	{
		ObjectiveMessage = TEXT("Avoid the raging flames and escape to the nearby village!");
	}
	/*else if (ChapterName.Equals("%"))
	{
		
	}
	else if (ChapterName.Equals("%"))
	{
		
	}*/
}

void AFlash_Back::ProgressNextChapter()
{
	FString ChapterName = GetChapterName();

	if (ChapterName.Equals("Chapter_1_Flashback"))
	{
		// NN Progress to lobby 
		/*UGameplayStatics::OpenLevel(GetWorld(), TEXT("Lobby"));*/

		UE_LOG(LogTemp, Warning, TEXT("Players moves to lobby."));
	}

}