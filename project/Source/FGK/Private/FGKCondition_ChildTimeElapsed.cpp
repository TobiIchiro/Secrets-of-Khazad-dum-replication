#include "FGKCondition_ChildTimeElapsed.h"

UFGKCondition_ChildTimeElapsed::UFGKCondition_ChildTimeElapsed() {
    this->StateContext = NULL;
    this->bRandomize = false;
    this->Duration = 1.00f;
    this->RandomizeMinDuration = 0.00f;
    this->RandomizeMaxDuration = 1.00f;
    this->CurrentDuration = 0.00f;
}


