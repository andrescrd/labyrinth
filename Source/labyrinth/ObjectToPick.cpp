#include "ObjectToPick.h"
#include "PlayerBase.h"
#include "Engine/World.h"
#include "labyrinthGameModeBase.h"

void AObjectToPick::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AObjectToPick::OnOverlap);
}

void AObjectToPick::OnOverlap(AActor *me, AActor *other)
{

	APlayerBase *player = Cast<APlayerBase>(other);

	if (player != nullptr)
	{
		AlabyrinthGameModeBase *gameMode = GetWorld()->GetAuthGameMode<AlabyrinthGameModeBase>();

		if (gameMode != nullptr)
		{
			gameMode->pickedObject++;
			Destroy();
		}
	}
}

