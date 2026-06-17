#include "MorZoneResourceDefinition.h"

FMorZoneResourceDefinition::FMorZoneResourceDefinition() {
    this->ResourceCount = 0;
    this->Priority = EMPriority::None;
    this->MeanPerContainer = 0.00f;
    this->StdDevPerContainer = 0.00f;
}

