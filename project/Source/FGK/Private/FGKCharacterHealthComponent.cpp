#include "FGKCharacterHealthComponent.h"

UFGKCharacterHealthComponent::UFGKCharacterHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitReactionTable = NULL;
    this->PartialHitTraceChannel = ECC_MAX;
    this->Character = NULL;
    this->bHitReactionTableProcessed = false;
    this->bCanGetUp = false;
}

void UFGKCharacterHealthComponent::Server_AckServerReceivedReactionRequest_Implementation(const FFGKHitReactionRequest& HitReactRequest) {
}

void UFGKCharacterHealthComponent::OnKillFromFalling_Implementation() {
}

void UFGKCharacterHealthComponent::OnDamageFromLanding_Implementation() {
}

void UFGKCharacterHealthComponent::Multicast_AckServerReceivedReactionRequest_Implementation(const FFGKHitReactionRequest& HitReactRequest) {
}


