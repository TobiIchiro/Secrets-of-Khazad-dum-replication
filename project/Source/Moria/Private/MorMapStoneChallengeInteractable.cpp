#include "MorMapStoneChallengeInteractable.h"
#include "Net/UnrealNetwork.h"

AMorMapStoneChallengeInteractable::AMorMapStoneChallengeInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Discovered = false;
    this->WaypointId = -1;
}


void AMorMapStoneChallengeInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMapStoneChallengeInteractable, WaypointId);
}


