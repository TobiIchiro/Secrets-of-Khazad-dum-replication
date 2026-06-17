#include "FGKGait.h"

FFGKGait::FFGKGait() {
    this->Gait = EFGKGait::Walking;
    this->Walking_ = false;
    this->Running_ = false;
    this->Sprinting_ = false;
}

