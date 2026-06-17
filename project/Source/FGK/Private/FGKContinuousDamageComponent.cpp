#include "FGKContinuousDamageComponent.h"

UFGKContinuousDamageComponent::UFGKContinuousDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageSettings = NULL;
    this->PulseEffect = NULL;
}

void UFGKContinuousDamageComponent::DealDamage() {
}


