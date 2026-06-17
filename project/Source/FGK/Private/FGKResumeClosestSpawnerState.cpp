#include "FGKResumeClosestSpawnerState.h"

UFGKResumeClosestSpawnerState::UFGKResumeClosestSpawnerState() {
    this->bFinishNextFrame = true;
    this->bCanTakeDamageDuringSpawning = true;
    this->bRemoveInteractAfterUse = true;
    this->SpawnClass = NULL;
}


