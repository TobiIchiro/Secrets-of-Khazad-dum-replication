#include "MorVenerationLamp.h"
#include "Net/UnrealNetwork.h"

AMorVenerationLamp::AMorVenerationLamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasFinishedAnimations = false;
    this->VoiceInteractor = NULL;
}

void AMorVenerationLamp::OnRep_HasFinishedAnimations(bool NewState) {
}

bool AMorVenerationLamp::GetWasActivated() {
    return false;
}

uint8 AMorVenerationLamp::GetVenerationSongPlayingID() const {
    return 0;
}


void AMorVenerationLamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorVenerationLamp, bHasFinishedAnimations);
}


