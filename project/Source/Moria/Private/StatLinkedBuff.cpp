#include "StatLinkedBuff.h"

FStatLinkedBuff::FStatLinkedBuff() {
    this->Buff = NULL;
    this->ActivationValueType = EMorStatBuffValueType::Absolute;
    this->RemoveCondition = EMorStatBuffRemoveCondition::Never;
}

