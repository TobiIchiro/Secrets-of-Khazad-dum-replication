#include "FGKActionEffect_SetMovementMode.h"

UFGKActionEffect_SetMovementMode::UFGKActionEffect_SetMovementMode() {
    this->MovementMode = MOVE_None;
    this->Delay = 0.00f;
}

void UFGKActionEffect_SetMovementMode::SetMovementModeFromTimer(UFGKCharacterMovementComponent* MovementComponent) {
}


