#include "MorCursorSlotComponent.h"
#include "Templates/SubclassOf.h"

UMorCursorSlotComponent::UMorCursorSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CursorContainerItemClass = NULL;
}

void UMorCursorSlotComponent::TryMovingCursorItemBackIntoInventory() {
}

void UMorCursorSlotComponent::SwapAllOrMoveAllToCursorSlot(const FItemHandle& From) {
}

void UMorCursorSlotComponent::ServerTryMovingCursorItemBackIntoInventory_Implementation() {
}
bool UMorCursorSlotComponent::ServerTryMovingCursorItemBackIntoInventory_Validate() {
    return true;
}

void UMorCursorSlotComponent::ServerHandleCursorMove_Implementation(const FItemHandle& From, int32 Count, EAddItem AddType, bool bPerformSwapIfPossible) {
}
bool UMorCursorSlotComponent::ServerHandleCursorMove_Validate(const FItemHandle& From, int32 Count, EAddItem AddType, bool bPerformSwapIfPossible) {
    return true;
}

void UMorCursorSlotComponent::MoveToCursorSlot(const FItemHandle& From, int32 Count, EAddItem AddType) {
}

void UMorCursorSlotComponent::ItemTypeRemoved(TSubclassOf<AInventoryItem> Class) {
}

void UMorCursorSlotComponent::ItemTypeAdded(TSubclassOf<AInventoryItem> Class) {
}

void UMorCursorSlotComponent::InventoryChanged(const FItemHandle& ItemHandle) {
}

FItemHandle UMorCursorSlotComponent::GetCursorSlotContents() const {
    return FItemHandle{};
}

FItemHandle UMorCursorSlotComponent::GetCursorSlotContainer() const {
    return FItemHandle{};
}


