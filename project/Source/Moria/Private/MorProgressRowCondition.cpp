#include "MorProgressRowCondition.h"

FMorProgressRowCondition::FMorProgressRowCondition() {
    this->CompareType = EMorProgressRowNumberCompareType::LessThan;
    this->CompareValue = 0;
}

