#include "FGKCondition_IsDesiredGait.h"

UFGKCondition_IsDesiredGait::UFGKCondition_IsDesiredGait() {
    this->Gait = EFGKGait::Walking;
    this->bCurrentGait = false;
    this->bActualGait = false;
    this->bRequestedGait = true;
}


