#include "FGKExplosiveComponent.h"

UFGKExplosiveComponent::UFGKExplosiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Instigator = NULL;
}

void UFGKExplosiveComponent::ApplyDamageToVictim(AFGKBaseCharacter* Attacker, AActor* Victim, const FFGKRadialDamageEvent& DamageEvent) {
}


