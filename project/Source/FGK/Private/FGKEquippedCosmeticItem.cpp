#include "FGKEquippedCosmeticItem.h"

FFGKEquippedCosmeticItem::FFGKEquippedCosmeticItem() {
    this->Slot = EFGKCosmeticEquipSlot::None;
    this->ItemClass = NULL;
    this->ReplicatedActor = NULL;
    this->LocalActor = NULL;
}

