#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VerticalTrap.generated.h"

UCLASS()
class LABYRINTH_API AVerticalTrap : public AActor
{
	GENERATED_BODY()

public:
	AVerticalTrap();

protected:
	FTimerHandle timerHandle;
	virtual void BeginPlay() override;
	void ChangeDirection();

public:
	UPROPERTY(EditAnywhere)
	float damage;

	UPROPERTY(EditAnywhere)
	float velocity;

	UPROPERTY(EditAnywhere)
	float changeTime;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlap(AActor *me, AActor *other);
};
