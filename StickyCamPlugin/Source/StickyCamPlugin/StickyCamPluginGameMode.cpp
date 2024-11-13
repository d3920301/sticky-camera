// Copyright Epic Games, Inc. All Rights Reserved.

#include "StickyCamPluginGameMode.h"
#include "StickyCamPluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStickyCamPluginGameMode::AStickyCamPluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
