#include "FGKAICondition_HasActiveStimulus.h"

UFGKAICondition_HasActiveStimulus::UFGKAICondition_HasActiveStimulus() {
    this->SenseToCheck = NULL;
    this->MaxAge = -1.00f;
    this->TeamAttitude = ETeamAttitude::Hostile;
}


