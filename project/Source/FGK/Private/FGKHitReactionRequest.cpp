#include "FGKHitReactionRequest.h"

FFGKHitReactionRequest::FFGKHitReactionRequest() {
    this->Attacker = NULL;
    this->bForceTargetOnAttacker = false;
    this->IsOnGround = false;
    this->bHandled = false;
}

