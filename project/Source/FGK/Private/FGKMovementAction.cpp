#include "FGKMovementAction.h"

FFGKMovementAction::FFGKMovementAction() {
    this->Action = EFGKMovementAction::None;
    this->None_ = false;
    this->LowMantle_ = false;
    this->HighMantle_ = false;
    this->Rolling_ = false;
    this->GettingUp_ = false;
}

