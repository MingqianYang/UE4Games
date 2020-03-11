// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UltimateGameMode.h"
#include "UltimateHUD.h"
#include "UltimateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUltimateGameMode::AUltimateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUltimateHUD::StaticClass();
}
