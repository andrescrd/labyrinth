#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectToPick.generated.h"

UCLASS()
class LABYRINTH_API AObjectToPick : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnOverlap(AActor *me, AActor *other);

};
