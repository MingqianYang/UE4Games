// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UltimateGameMode.h"
#include "UltimateHUD.h"
#include "UltimateCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include <Ultimate\UltimateGameState.h>
#include "Engine/World.h"

AUltimateGameMode::AUltimateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUltimateHUD::StaticClass();

	PointsToWin = 5;
}

void AUltimateGameMode::OnTargetHit()
{
	// Every time the player gives a hit to an object, the points will add
	if (AUltimateGameState* GS = Cast< AUltimateGameState>(GameState))
	{
		GS->Points++;
		if (GS->Points >= PointsToWin)
		{
			UE_LOG(LogTemp, Warning, TEXT("You won the game!"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Won! %second."), GetWorld()->GetTimeSeconds()));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("You scored a point. You now have %d points"), GS->Points);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You scored. %d"), GS->Points));
		}
	}
}
