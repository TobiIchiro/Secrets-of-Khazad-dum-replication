#include "MorCueSpotInteractable.h"
#include "Net/UnrealNetwork.h"

AMorCueSpotInteractable::AMorCueSpotInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CueSpotInteractionText = FText::FromString(TEXT("Cue Spot Event"));
}

void AMorCueSpotInteractable::SetupInteractions() {
}

void AMorCueSpotInteractable::OnRep_PlayersThatHaveInteractedWithThis(TArray<FGuid> Players) {
}


void AMorCueSpotInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorCueSpotInteractable, PlayersThatHaveInteractedWithThis);
}


