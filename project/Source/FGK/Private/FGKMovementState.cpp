#include "FGKMovementState.h"

FFGKMovementState::FFGKMovementState() {
    this->State = EFGKMovementState::None;
    this->None_ = false;
    this->Grounded_ = false;
    this->InAir_ = false;
    this->Mantling_ = false;
    this->Ragdoll_ = false;
    this->Custom_ = false;
}

