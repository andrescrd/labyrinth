#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKey.generated.h"

UCLASS()
class LABYRINTH_API ADoorKey : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnOverlap(AActor *me, AActor *other);
};
