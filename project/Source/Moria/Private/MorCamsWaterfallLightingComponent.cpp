#include "MorCamsWaterfallLightingComponent.h"

UMorCamsWaterfallLightingComponent::UMorCamsWaterfallLightingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeOfDayCurve = NULL;
    this->OwningZoneLighting = NULL;
}


