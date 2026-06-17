#include "FGKCondition_VelocityThreshold.h"

UFGKCondition_VelocityThreshold::UFGKCondition_VelocityThreshold() {
    this->CompareType = ENumberCompareType::GREATERTHANOREQUAL;
    this->VelocityThreshold = 0.00f;
    this->VelocityThresholdType = EVelocityThreshold::None;
    this->ThresholdType = EVelocityThresholdType::ThreeDimensional;
}


