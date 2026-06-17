#include "MorResourceReceptacleWithCustomName.h"
#include "Net/UnrealNetwork.h"

AMorResourceReceptacleWithCustomName::AMorResourceReceptacleWithCustomName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSetCustomDisplayName = false;
}

void AMorResourceReceptacleWithCustomName::OnRep_CustomDisplayName() {
}

void AMorResourceReceptacleWithCustomName::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorResourceReceptacleWithCustomName, CustomDisplayName);
}


