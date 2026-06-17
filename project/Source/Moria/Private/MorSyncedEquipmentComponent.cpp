#include "MorSyncedEquipmentComponent.h"
#include "Templates/SubclassOf.h"

UMorSyncedEquipmentComponent::UMorSyncedEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Equip = NULL;
    this->Inventory = NULL;
}

void UMorSyncedEquipmentComponent::ItemUnequipped(const FItemHandle& Item) {
}

void UMorSyncedEquipmentComponent::ItemEquipped(const FItemHandle& Item) {
}

void UMorSyncedEquipmentComponent::ItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded) {
}


