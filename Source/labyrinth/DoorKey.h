#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKey.generated.h"

UCLASS()
class LABYRINTH_API ADoorKey : public AActor
{
	GENERATED_BODY()

public:
	ADoorKey();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
