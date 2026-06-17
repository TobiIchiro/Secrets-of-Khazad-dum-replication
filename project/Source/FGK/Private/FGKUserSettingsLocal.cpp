#include "FGKUserSettingsLocal.h"

UFGKUserSettingsLocal::UFGKUserSettingsLocal() {
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->InputConfigName = TEXT("Default");
}

UPlayerMappableInputConfig* UFGKUserSettingsLocal::GetInputConfigByName(FName ConfigName) const {
    return NULL;
}


