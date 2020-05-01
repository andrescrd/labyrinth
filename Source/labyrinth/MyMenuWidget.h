#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyMenuWidget.generated.h"

UCLASS()
class LABYRINTH_API UMyMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Play();		

	UFUNCTION(BlueprintCallable)
	void Quit();		
};
