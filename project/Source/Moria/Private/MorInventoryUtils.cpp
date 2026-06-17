#include "MorInventoryUtils.h"

UMorInventoryUtils::UMorInventoryUtils() {
}

UInventoryComponent* UMorInventoryUtils::GetOwnerInventory_ItemHandle(const FItemHandle& Item) {
    return NULL;
}

int32 UMorInventoryUtils::GetItemCountSum_RowHandle(const FMorAnyItemRowHandle& ItemRowHandle, const TArray<UInventoryComponent*>& Inventories) {
    return 0;
}

int32 UMorInventoryUtils::GetItemCountSum_Definition(const FMorItemDefinition& ItemDefinition, const TArray<UInventoryComponent*>& Inventories) {
    return 0;
}

void UMorInventoryUtils::GetInventoryCursorItem(UInventoryComponent* Inventory, FItemHandle& OutItem) {
}


