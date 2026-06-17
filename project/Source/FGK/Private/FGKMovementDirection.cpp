#include "FGKMovementDirection.h"

FFGKMovementDirection::FFGKMovementDirection() {
    this->MovementDirection = EFGKMovementDirection::Forward;
    this->Forward_ = false;
    this->Right_ = false;
    this->Left_ = false;
    this->Backward_ = false;
}

