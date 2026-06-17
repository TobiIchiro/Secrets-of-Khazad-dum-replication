#include "MorShadowFogRepellerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UMorShadowFogRepellerComponent::UMorShadowFogRepellerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->Strength = 10000.00f;
    this->bIsEnabled = true;
    this->NiagaraSlotIndex = -1;
    this->ShadowRepelAmount = 4;
}

int32 UMorShadowFogRepellerComponent::GetShadowRepelAmount() const {
    return 0;
}


