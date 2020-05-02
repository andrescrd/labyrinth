#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBase.generated.h"

UCLASS()
class LABYRINTH_API APlayerBase : public APawn
{
	GENERATED_BODY()

public:
	APlayerBase();

protected:
	virtual void BeginPlay() override;

public:
	class ACheckpoint* currentCheckpoint;
	FVector intialPosition;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float initialLife;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int keys;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int respawns;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float life;

	UPROPERTY(EditAnywhere)
		float velocity;

	UPROPERTY(EditAnywhere)
		float velocityRotation;

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ForwardAxis(float value);
	void SideAxis(float value);
};
