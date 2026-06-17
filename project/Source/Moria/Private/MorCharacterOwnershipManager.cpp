#include "MorCharacterOwnershipManager.h"
#include "Net/UnrealNetwork.h"

AMorCharacterOwnershipManager::AMorCharacterOwnershipManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMorCharacterOwnershipManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorCharacterOwnershipManager, OwnershipData);
}


