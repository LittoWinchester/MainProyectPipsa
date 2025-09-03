// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainProyectGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AMainProyectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AMainProyectGameMode();
};



