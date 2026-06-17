#include "FGKStandingState.h"

UFGKStandingState::UFGKStandingState() {
    this->bShouldCheckFloor = false;
    this->FloorCheckInterval = 3.00f;
    this->MovementComp = NULL;
}


