#include "FGKInventoryUtils.h"

UFGKInventoryUtils::UFGKInventoryUtils() {
}

bool UFGKInventoryUtils::IsEmpty(const UInventoryComponent* Inventory) {
    return false;
}

bool UFGKInventoryUtils::IsContainerEmpty(const FItemHandle& Handle) {
    return false;
}

int32 UFGKInventoryUtils::GetTotalItemCount(const UInventoryComponent* Inventory) {
    return 0;
}

int32 UFGKInventoryUtils::GetItemCountSum(const TSoftClassPtr<AInventoryItem>& ItemClass, const TArray<UInventoryComponent*>& Inventories) {
    return 0;
}

int32 UFGKInventoryUtils::GetContainerTotalItemCount(const FItemHandle& Handle) {
    return 0;
}


