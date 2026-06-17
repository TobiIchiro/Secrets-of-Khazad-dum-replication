#include "MorPlayerPermissionSet.h"

FMorPlayerPermissionSet::FMorPlayerPermissionSet() {
    this->ConstructionPermission = EConstructionPermission::NoConstruction;
    this->StoragePermission = EStoragePermission::NoStorage;
}

