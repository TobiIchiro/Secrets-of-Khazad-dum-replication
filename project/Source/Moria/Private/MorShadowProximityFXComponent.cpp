#include "MorShadowProximityFXComponent.h"

UMorShadowProximityFXComponent::UMorShadowProximityFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 500.00f;
    this->AudioEvent = NULL;
    this->RTPC = NULL;
    this->RtpcValueMultiplier = 10.00f;
    this->RtpcInterpolationTimeMs = 1000.00f;
    this->AkComponent = NULL;
    this->PostProcessComponent = NULL;
}


