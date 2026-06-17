#include "MorShadowFluidComponent.h"

UMorShadowFluidComponent::UMorShadowFluidComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShadowFluidClass = NULL;
    this->ShadowFnClass = NULL;
    this->ShadowScaleMultiplier = 8.00f;
    this->ShadowFluid = NULL;
}

AMorShadowFluid* UMorShadowFluidComponent::GetShadowFluid() const {
    return NULL;
}


