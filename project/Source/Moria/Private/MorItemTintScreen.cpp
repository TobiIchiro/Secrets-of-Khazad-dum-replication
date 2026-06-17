#include "MorItemTintScreen.h"

UMorItemTintScreen::UMorItemTintScreen() {
    this->Crafter = NULL;
    this->ItemTintStation = NULL;
    this->InitialEquippedShieldOr2HWeapon = NULL;
    this->TempShieldActor = NULL;
}

void UMorItemTintScreen::RestoreOriginalVisual(UMorEquipComponent* EquipComp) {
}

void UMorItemTintScreen::PreviewItem(const FItemHandle& TintableItem, UMorEquipComponent* EquipComp) {
}

void UMorItemTintScreen::PreviewColor(const FItemHandle& TintableItem, const FMorItemTintDefinition& SelectedTint, UMorEquipComponent* EquipComp) {
}

void UMorItemTintScreen::PayCostAndTintItem(const FItemHandle& TintableItem, const FMorItemTintDefinition& TintDefinition) {
}

TArray<FItemHandle> UMorItemTintScreen::GetItemsToTint(bool ExcludeEquipped) const {
    return TArray<FItemHandle>();
}

FMorItemDefinition UMorItemTintScreen::GetItemDefinition(const FItemHandle& ItemHandle) const {
    return FMorItemDefinition{};
}

TArray<FMorItemTintDefinition> UMorItemTintScreen::GetAvailableTints() const {
    return TArray<FMorItemTintDefinition>();
}

bool UMorItemTintScreen::CanPayCost(const FMorItemTintDefinition& TintDefinition) const {
    return false;
}


