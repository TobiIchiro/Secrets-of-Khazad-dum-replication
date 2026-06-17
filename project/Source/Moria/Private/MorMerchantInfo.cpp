#include "MorMerchantInfo.h"

FMorMerchantInfo::FMorMerchantInfo() {
    this->Status = EMorMerchantStatus::Locked;
    this->NextVisitTime = 0;
}

