#include "MorRemoveWaypointOnInventoryChangeComponent.h"
#include "Templates/SubclassOf.h"

UMorRemoveWaypointOnInventoryChangeComponent::UMorRemoveWaypointOnInventoryChangeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRemoveOnAdd = true;
    this->bRemoveOnRemove = true;
}

void UMorRemoveWaypointOnInventoryChangeComponent::ItemRemoved(TSubclassOf<AInventoryItem> Class, int32 AmountRemoved, int32 NewTotalCount) {
}

void UMorRemoveWaypointOnInventoryChangeComponent::ItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> Class, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded) {
}


