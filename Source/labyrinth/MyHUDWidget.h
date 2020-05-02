// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyHUDWidget.generated.h"

/**
 *
 */
UCLASS()
class LABYRINTH_API UMyHUDWidget : public UUserWidget
{
	GENERATED_BODY()

		class AlabyrinthGameModeBase* gameMode;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* scoreLabel;

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
