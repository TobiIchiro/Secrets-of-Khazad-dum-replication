#include "MorCraftingStationStatusWidget.h"

UMorCraftingStationStatusWidget::UMorCraftingStationStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DelayToResolveCollectableState = 2.00f;
    this->DelayToInitialUpdate = 1.00f;
    this->CraftingStation = NULL;
    this->bNpcCraftingTimerWidget = false;
}










bool UMorCraftingStationStatusWidget::IsCrafting() const {
    return false;
}

void UMorCraftingStationStatusWidget::InitializeStationWidget(AMorCraftingStation* InCraftingStation, bool bIsFueledStation, bool bIsNpcCraftTimerWidget) {
}

void UMorCraftingStationStatusWidget::HandleOnFsmEndCrafting() {
}

void UMorCraftingStationStatusWidget::HandleOnFsmEndCollectable() {
}

void UMorCraftingStationStatusWidget::HandleOnFsmBeginCrafting() {
}

void UMorCraftingStationStatusWidget::HandleOnFsmBeginCollectable() {
}

void UMorCraftingStationStatusWidget::DeinitializeStationWidget(bool bResetWidget) {
}


