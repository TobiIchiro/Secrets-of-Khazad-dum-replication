#include "MoonstoneBreakableComponent.h"

UMoonstoneBreakableComponent::UMoonstoneBreakableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInSpeed = 1.00f;
    this->FadeOutSpeed = 0.50f;
    this->ProducerUpdateInterval = 0.10f;
    this->LightProducerRadius = 1000.00f;
    this->LightProducerFalloffCurve = NULL;
    this->LightSamplerRadius = 500.00f;
    this->MaxLightAmount = 15.00f;
    this->LightProductionMultiplier = 1.00f;
    this->MeshComponent = NULL;
    this->GameplayLightManager = NULL;
    this->CrystalLightSamplerComponent = NULL;
    this->CrystalLightProducerComponent = NULL;
    this->LightAmount = 0.00f;
}


