#include "MorInventoryScreen.h"

UMorInventoryScreen::UMorInventoryScreen() {
    this->StorageObject = NULL;
}

bool UMorInventoryScreen::WasOpenedWithStorage() const {
    return false;
}

bool UMorInventoryScreen::IsActivatedFromInteract() const {
    return false;
}

UMorCursorSlotComponent* UMorInventoryScreen::GetCursorSlotComponent() const {
    return NULL;
}


