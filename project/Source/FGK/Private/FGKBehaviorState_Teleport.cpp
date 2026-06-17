#include "FGKBehaviorState_Teleport.h"

UFGKBehaviorState_Teleport::UFGKBehaviorState_Teleport() {
    this->RotationType = EFGKAITeleportStateRotationType::None;
    this->bShouldProjectGoalWithExtent = false;
    this->bShouldStopMontage = false;
}


