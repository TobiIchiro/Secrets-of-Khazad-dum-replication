#include "MorToolDefinition.h"

FMorToolDefinition::FMorToolDefinition() {
    this->Durability = 0;
    this->DurabilityDecayWhileEquipped = 0.00f;
    this->StaminaCost = 0.00f;
    this->EnergyCost = 0.00f;
    this->RepairCostCurve = NULL;
    this->CarveHits = 0;
    this->NpcMiningRate = 0.00f;
}

