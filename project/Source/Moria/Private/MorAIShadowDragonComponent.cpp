#include "MorAIShadowDragonComponent.h"

UMorAIShadowDragonComponent::UMorAIShadowDragonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KnockbackDamageThreshhold = 400.00f;
    this->KnockbackRadius = 3000.00f;
    this->KnockbackForce = 2500.00f;
}


