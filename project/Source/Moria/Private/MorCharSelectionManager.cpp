#include "MorCharSelectionManager.h"

AMorCharSelectionManager::AMorCharSelectionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedCustomizationMannequinRef = NULL;
    this->InitialMannequinPosition = 0;
}

void AMorCharSelectionManager::SetVisible(AMorCustomizationMannequin* Mannequin, bool bMannequin, bool bText) {
}

void AMorCharSelectionManager::SelectFreeCustomization() {
}

void AMorCharSelectionManager::RefreshSelection(int32 ToCustomization) {
}

void AMorCharSelectionManager::PreviousCharacter() {
}

void AMorCharSelectionManager::NextCharacter() {
}

void AMorCharSelectionManager::HandleOnCustomizationsLocallyApplied() {
}

int32 AMorCharSelectionManager::GetSelectedCustomizationSaveSlot() {
    return 0;
}

AMorCustomizationMannequin* AMorCharSelectionManager::GetSelectedCustomizationMannequin() const {
    return NULL;
}

int32 AMorCharSelectionManager::GetLoadedCustomizationCount() const {
    return 0;
}

AMorCharSelectionManager* AMorCharSelectionManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

int32 AMorCharSelectionManager::GetCurrentSelectedCustomization() const {
    return 0;
}

void AMorCharSelectionManager::DestroySavedCustomization() {
}

void AMorCharSelectionManager::ConfirmedSelectedCustomization(int32 CustomizationSaveSlotNumber) {
}

bool AMorCharSelectionManager::AreSelectedCustomizationsDirty() const {
    return false;
}

void AMorCharSelectionManager::ApplyCustomizations(int32 CustomizationSaveSlotNumber) {
}


