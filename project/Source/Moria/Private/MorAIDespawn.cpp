#include "MorAIDespawn.h"

FMorAIDespawn::FMorAIDespawn() {
    this->Spawner = NULL;
    this->CharacterToDespawn = NULL;
    this->SpawnContext = EMorAISpawnContext::None;
    this->AffiliatedSquad = NULL;
}

