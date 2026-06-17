#include "MorShadowFogEmitterComponent.h"

UMorShadowFogEmitterComponent::UMorShadowFogEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InfluenceRadiusMultiplier = 1.50f;
    this->EmitterWidth = 60.00f;
    this->NiagaraSystem = NULL;
    this->NiagaraSystemCullDistance = 1600.00f;
    this->bAutoActivateNiagaraSystem = true;
    this->SystemRadius = 1000.00f;
    this->NiagaraComponent = NULL;
}

void UMorShadowFogEmitterComponent::SetNeedsUpdate(const bool Value) {
}

UNiagaraComponent* UMorShadowFogEmitterComponent::GetNiagaraComponent() {
    return NULL;
}


