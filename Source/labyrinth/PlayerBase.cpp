
#include "PlayerBase.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"

APlayerBase::APlayerBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerBase::BeginPlay()
{
	Super::BeginPlay();
	intialPosition = GetActorLocation();
	initialLife = life;
}

void APlayerBase::Tick(float DeltaTime)
{
	if (life <= 0)
	{
		if(respawns > 0)
		{
			SetActorLocation(intialPosition);
			life = initialLife;						
			respawns--;
		}
		else
		{
			Destroy();
		}	
	}	
}

void APlayerBase::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	InputComponent->BindAxis("Forward", this, &APlayerBase::ForwardAxis);
	InputComponent->BindAxis("Side", this, &APlayerBase::SideAxis);
}

void APlayerBase::ForwardAxis(float value)
{
	float movementX = value * velocity * GetWorld()->GetDeltaSeconds();
	AddActorLocalOffset(FVector(movementX, 0, 0), true);
}

void APlayerBase::SideAxis(float value)
{
	float movementY = value * velocity * GetWorld()->GetDeltaSeconds();
	AddActorLocalRotation(FRotator(0, movementY, 0), true);
}
