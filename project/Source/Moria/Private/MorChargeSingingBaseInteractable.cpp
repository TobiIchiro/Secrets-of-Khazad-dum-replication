#include "MorChargeSingingBaseInteractable.h"
#include "Net/UnrealNetwork.h"

AMorChargeSingingBaseInteractable::AMorChargeSingingBaseInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerAbility = NULL;
}

void AMorChargeSingingBaseInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorChargeSingingBaseInteractable, OwnerCharacter);
}


