// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUDWidget.h"
#include "Engine\World.h"
#include "labyrinthGameModeBase.h"
#include "Components\TextBlock.h"

void UMyHUDWidget::NativeConstruct()
{
	AGameModeBase* mode = GetWorld()->GetAuthGameMode();

	if (mode != nullptr)
	{
		gameMode = Cast<AlabyrinthGameModeBase>();
	}
}

void UMyHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	FString objectToPickString = FString::FromInt(gameMode->objectToPick);
	scoreLabel->SetText(FText::FromString(objectToPickString));
}
