#include "MorMiningSongInteractable.h"
#include "Net/UnrealNetwork.h"

AMorMiningSongInteractable::AMorMiningSongInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EMiningSongInteractableState::Idle;
}

void AMorMiningSongInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMiningSongInteractable, OwnerCharacter);
    DOREPLIFETIME(AMorMiningSongInteractable, SongCreator);
    DOREPLIFETIME(AMorMiningSongInteractable, CurrentState);
}


