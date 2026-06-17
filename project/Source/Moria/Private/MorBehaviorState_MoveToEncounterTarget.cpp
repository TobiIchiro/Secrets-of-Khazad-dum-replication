#include "MorBehaviorState_MoveToEncounterTarget.h"

UMorBehaviorState_MoveToEncounterTarget::UMorBehaviorState_MoveToEncounterTarget() {
    this->bShouldProjectGoalWithExtent = true;
    this->MaxProjectAttempts = 10;
    this->ScalePerProjectAttempt = 1.50f;
}


