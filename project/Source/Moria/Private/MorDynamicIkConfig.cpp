#include "MorDynamicIkConfig.h"

FMorDynamicIkConfig::FMorDynamicIkConfig() {
    this->bEnabled = false;
    this->bCanUsePowerIK = false;
    this->bCanUseDragonIK = false;
    this->bCanUseControlRig = false;
    this->Priority = 0.00f;
}

