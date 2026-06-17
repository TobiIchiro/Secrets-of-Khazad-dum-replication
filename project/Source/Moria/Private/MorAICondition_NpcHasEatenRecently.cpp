#include "MorAICondition_NpcHasEatenRecently.h"

UMorAICondition_NpcHasEatenRecently::UMorAICondition_NpcHasEatenRecently() {
    this->Threshold = ERecentEatThreshold::Hungry;
    this->CustomTime = 12;
}


