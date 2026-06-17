#include "FGKBehaviorState_RequestAction.h"

UFGKBehaviorState_RequestAction::UFGKBehaviorState_RequestAction() {
    this->RequestAction = EAIActionType::Taunt;
    this->MaxTimeToActivate = 0.10f;
    this->MaxActionTime = -1.00f;
    this->TimeToActivate = -1.00f;
    this->bStarted = false;
    this->ForcedTarget = NULL;
}


