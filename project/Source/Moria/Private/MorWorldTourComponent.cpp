#include "MorWorldTourComponent.h"

UMorWorldTourComponent::UMorWorldTourComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportTimeout = 300.00f;
    this->VisitTimeout = 300.00f;
    this->ScreenshotVisitor = NULL;
    this->MemReportVisitor = NULL;
    this->PerformanceVisitor = NULL;
}


