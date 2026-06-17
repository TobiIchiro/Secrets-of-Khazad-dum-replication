#include "MorFXLocalPlayerProximityComp.h"

UMorFXLocalPlayerProximityComp::UMorFXLocalPlayerProximityComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOneShotTrigger = true;
    this->TriggerZoneRadius = 0.00f;
}

void UMorFXLocalPlayerProximityComp::ResetTrigger() {
}

bool UMorFXLocalPlayerProximityComp::PlayerLocationValid() {
    return false;
}

FVector UMorFXLocalPlayerProximityComp::GetPlayerLocation() {
    return FVector{};
}

float UMorFXLocalPlayerProximityComp::GetPlayerDistance() {
    return 0.0f;
}


