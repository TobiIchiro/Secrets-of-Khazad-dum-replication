#include "FGKRotationMode.h"

FFGKRotationMode::FFGKRotationMode() {
    this->RotationMode = EFGKRotationMode::VelocityDirection;
    this->VelocityDirection_ = false;
    this->LookingDirection_ = false;
    this->Aiming_ = false;
}

