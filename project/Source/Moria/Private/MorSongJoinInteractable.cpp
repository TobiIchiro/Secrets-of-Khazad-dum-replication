#include "MorSongJoinInteractable.h"
#include "Net/UnrealNetwork.h"

AMorSongJoinInteractable::AMorSongJoinInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
}

void AMorSongJoinInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorSongJoinInteractable, OwnerCharacter);
}


