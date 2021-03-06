// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "labyrinthGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LABYRINTH_API AlabyrinthGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AlabyrinthGameModeBase();

	int pickedObject;

	UPROPERTY(EditAnywhere)
	int objectToPick;

	virtual void Tick(float deltaSecond) override;
};
