// Copyright Epic Games, Inc. All Rights Reserved.

#include "StickyCameraGameMode.h"
#include "StickyCameraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStickyCameraGameMode::AStickyCameraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
