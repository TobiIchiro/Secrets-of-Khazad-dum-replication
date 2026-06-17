#include "MorAmbientNoiseManager.h"

AMorAmbientNoiseManager::AMorAmbientNoiseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value = 0.00f;
    this->AmbientNoiseRtpc = NULL;
    this->Range = 1000.00f;
    this->ValueToDecreaseBy = 0.10f;
}

void AMorAmbientNoiseManager::ReportEvent(FVector LocationEventOccuredAt) {
}

void AMorAmbientNoiseManager::MulticastReportEvent_Implementation(FVector LocationEventOccuredAt) {
}


