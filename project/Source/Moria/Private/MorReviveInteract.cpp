#include "MorReviveInteract.h"
#include "Net/UnrealNetwork.h"

AMorReviveInteract::AMorReviveInteract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMorReviveInteract::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorReviveInteract, OwnerCharacter);
}


