// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FixHim2GameMode.h"
#include "FixHim2Character.h"
#include "UObject/ConstructorHelpers.h"

AFixHim2GameMode::AFixHim2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
