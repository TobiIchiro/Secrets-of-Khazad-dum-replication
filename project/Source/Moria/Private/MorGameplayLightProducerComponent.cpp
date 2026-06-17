#include "MorGameplayLightProducerComponent.h"

UMorGameplayLightProducerComponent::UMorGameplayLightProducerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = false;
    this->LightAmount = 10.00f;
    this->LightFalloffCurve = NULL;
}


