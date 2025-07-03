// Copyright Epic Games, Inc. All Rights Reserved.

#include "AntaresGameMode.h"
#include "AntaresCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAntaresGameMode::AAntaresGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
