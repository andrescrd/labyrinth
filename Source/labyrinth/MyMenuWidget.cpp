#include "MyMenuWidget.h"
#include "Engine/World.h"
#include "GenericPlatform/GenericPlatformMisc.h"

void UMyMenuWidget::Play()
{
    GetWorld()->ServerTravel("level1");
}

void UMyMenuWidget::Quit()
{
    FGenericPlatformMisc::RequestExit(false);
}