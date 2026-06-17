#include "MorAISiegeProgressionDefinition.h"

FMorAISiegeProgressionDefinition::FMorAISiegeProgressionDefinition() {
    this->SiegeSettings = NULL;
    this->TimeOfDay = EMorAIPatrolTimeOfDay::Both;
    this->AcceptableGameModes = EMorGameModeFlags::None;
}

