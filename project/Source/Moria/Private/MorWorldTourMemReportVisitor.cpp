#include "MorWorldTourMemReportVisitor.h"

UMorWorldTourMemReportVisitor::UMorWorldTourMemReportVisitor() {
    this->FrameCount = 0;
    this->ReportFrame = 0;
    this->ContinueFrame = 0;
    this->Mode = EMorMemReportMode::Full;
    this->PauseFrames = 600;
}


