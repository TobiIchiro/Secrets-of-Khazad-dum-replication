#include "FGKTestPlayerCommandData.h"

FFGKTestPlayerCommandData::FFGKTestPlayerCommandData() {
    this->CommandType = EFGKTestPlayerCommandType::Move;
    this->Marker = NULL;
    this->Tolerance = 0.00f;
    this->DistanceType = EFGKDistanceType::THREE_DIMENSIONAL;
    this->Duration = 0.00f;
    this->AdditionalKey = EFGKTestInput::None;
}

