#include "labyrinthGameModeBase.h"
#include "Engine/World.h"

AlabyrinthGameModeBase::AlabyrinthGameModeBase()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AlabyrinthGameModeBase::Tick(float deltaSecond)
{
    if (pickedObject >= objectToPick)
    {
        GetWorld()->ServerTravel("win");
    }
}