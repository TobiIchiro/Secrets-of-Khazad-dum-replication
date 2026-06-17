#include "MorAISettings.h"

UMorAISettings::UMorAISettings() {
    this->ApproachPriority = 0;
    this->AttackPriority = 0;
    this->bCanAttackThroughCharacters = false;
    this->SiegeRole = EMorSiegeRole::Breacher;
    this->BreakableSearchRange = 5000.00f;
    this->ObstacleQueryFilter = NULL;
}


