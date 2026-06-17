#include "FGKFilteredInventoryComponent.h"
#include "Net/UnrealNetwork.h"

UFGKFilteredInventoryComponent::UFGKFilteredInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFGKFilteredInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKFilteredInventoryComponent, Filter);
}


