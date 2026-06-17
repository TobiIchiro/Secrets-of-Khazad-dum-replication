#include "MorDestroyOnEmptyInventoryComponent.h"
#include "Templates/SubclassOf.h"

UMorDestroyOnEmptyInventoryComponent::UMorDestroyOnEmptyInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerInventory = NULL;
}

void UMorDestroyOnEmptyInventoryComponent::OnItemTypeRemoved(TSubclassOf<AInventoryItem> ItemClass) {
}


