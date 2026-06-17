#include "MorAutoPerfMeasurement.h"

UMorAutoPerfMeasurement::UMorAutoPerfMeasurement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MemorySampleRate = 0.50f;
    this->StepDelay = 0.50f;
    this->MeasurementStartDelay = 5.00f;
    this->MeasurementStopDelay = 10.00f;
    this->bSkipTraceUntilSpawnComplete = false;
    this->bUsesTransformForQuickSpawnGrid = false;
}


