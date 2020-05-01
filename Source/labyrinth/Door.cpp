#include "Door.h"
#include "PlayerBase.h"

ADoor::ADoor()
{
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ADoor::OnOverlap);
}

void ADoor::OnOverlap(AActor *me, AActor *other)
{
	APlayerBase *player = Cast<APlayerBase>(other);

	if (other != nullptr && player->keys > 0)
	{
		player->keys--;
		Destroy();
	}
}
