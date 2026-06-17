#include "MorStorageDefinition.h"

FMorStorageDefinition::FMorStorageDefinition() {
    this->Durability = 0;
    this->InventoryWidth = 0;
    this->InventoryHeight = 0;
    this->bUsesItemSize = false;
    this->bPortable = false;
    this->bDropContentsOnDeath = false;
    this->bDropContentsOnPlayerDisconnect = false;
    this->bIsEquippedOnly = false;
    this->bAllowEquipSwapping = false;
}

