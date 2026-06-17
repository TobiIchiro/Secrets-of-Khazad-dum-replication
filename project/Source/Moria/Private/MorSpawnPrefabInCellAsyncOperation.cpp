#include "MorSpawnPrefabInCellAsyncOperation.h"

UMorSpawnPrefabInCellAsyncOperation::UMorSpawnPrefabInCellAsyncOperation() {
    this->bHandleSpawnedActorsAsync = true;
    this->Layout = NULL;
    this->Prefab = NULL;
    this->bIsFullyCataloged = false;
    this->bWasInitialized = false;
}


