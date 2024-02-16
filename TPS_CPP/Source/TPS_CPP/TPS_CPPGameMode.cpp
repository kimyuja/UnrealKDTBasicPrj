// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS_CPPGameMode.h"
#include "TPS_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_CPPGameMode::ATPS_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
