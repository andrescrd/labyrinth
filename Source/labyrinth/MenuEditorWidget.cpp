// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuEditorWidget.h"
#include "Engine\World.h"
#include "GenericPlatform\GenericPlatformMisc.h"

void UMenuEditorWidget::Play()
{
	GetWorld()->ServerTravel("level1");

}

void UMenuEditorWidget::Quit()
{
	FGenericPlatformMisc::RequestExit(false);

}