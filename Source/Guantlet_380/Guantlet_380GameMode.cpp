// Copyright Epic Games, Inc. All Rights Reserved.

#include "Guantlet_380GameMode.h"
#include "Guantlet_380Character.h"
#include "UObject/ConstructorHelpers.h"

AGuantlet_380GameMode::AGuantlet_380GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
