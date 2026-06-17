#include "FGKCondition.h"

UFGKCondition::UFGKCondition() {
    this->Context = NULL;
    this->bForceTrue = false;
    this->bInvert = false;
}

bool UFGKCondition::Resolve() const {
    return false;
}

bool UFGKCondition::IsInverted() const {
    return false;
}

bool UFGKCondition::IsForceTrue() const {
    return false;
}

FString UFGKCondition::BP_GetDescription_Implementation() const {
    return TEXT("");
}

bool UFGKCondition::BP_Evaluate_Implementation() const {
    return false;
}


