#include "MorInteractableWithCustomName.h"
#include "Net/UnrealNetwork.h"

AMorInteractableWithCustomName::AMorInteractableWithCustomName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSetCustomDisplayName = false;
}

void AMorInteractableWithCustomName::OnRep_CustomDisplayName() {
}

void AMorInteractableWithCustomName::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorInteractableWithCustomName, CustomDisplayName);
}


