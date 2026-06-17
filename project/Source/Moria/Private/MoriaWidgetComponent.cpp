#include "MoriaWidgetComponent.h"

UMoriaWidgetComponent::UMoriaWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistance = 100.00f;
    this->MaxDistance = 10000.00f;
    this->DistanceScaleCurve = NULL;
    this->DistanceOpacityCurve = NULL;
    this->FadeInCurve = NULL;
    this->FadeOutCurve = NULL;
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
    this->CurDistance = 0.00f;
    this->CurHeightDelta = 0.00f;
    this->bShouldShow = false;
}


