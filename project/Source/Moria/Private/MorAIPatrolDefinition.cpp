#include "MorAIPatrolDefinition.h"

FMorAIPatrolDefinition::FMorAIPatrolDefinition() {
    this->TimeOfDay = EMorAIPatrolTimeOfDay::Both;
    this->PatrolType = EMorAIPatrolType::Orc;
    this->bSkipGetIntoPostionBehavior = false;
    this->ReinforcementSettings = NULL;
    this->HuntingPartySettings = NULL;
}

