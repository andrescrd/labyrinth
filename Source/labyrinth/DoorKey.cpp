
#include "DoorKey.h"
#include "PlayerBase.h"

void ADoorKey::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ADoorKey::OnOverlap);
}

void ADoorKey::OnOverlap(AActor *me, AActor *other)
{
	APlayerBase *player = Cast<APlayerBase>(other);

	if (other != nullptr)
	{
		player->keys++;
		Destroy();
	}
}
