// Copyright Epic Games, Inc. All Rights Reserved.

#include "StickyCameraPluginGameMode.h"
#include "StickyCameraPluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStickyCameraPluginGameMode::AStickyCameraPluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
