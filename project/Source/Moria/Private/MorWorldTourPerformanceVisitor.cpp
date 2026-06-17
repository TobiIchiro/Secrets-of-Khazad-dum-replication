#include "MorWorldTourPerformanceVisitor.h"

UMorWorldTourPerformanceVisitor::UMorWorldTourPerformanceVisitor() {
    this->FrameCount = 0;
    this->BeginBenchmarkFrame = 0;
    this->SpawnFrame = 4;
    this->EndBenchmarkFrame = 0;
    this->StableFrames = 60;
    this->BenchmarkFrames = 1000;
    this->Mode = EMorMemPerformanceMode::Normal;
    this->ScalabilitySetting = 0;
    this->Theta = 0.00f;
}


