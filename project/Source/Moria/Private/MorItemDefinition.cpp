#include "MorItemDefinition.h"

FMorItemDefinition::FMorItemDefinition() {
    this->DroppedItemMeshOverride = NULL;
    this->Portability = EItemPortability::Storable;
    this->MaxStackSize = 0;
    this->SlotSize = 0;
    this->BaseTradeValue = 0.00f;
}

