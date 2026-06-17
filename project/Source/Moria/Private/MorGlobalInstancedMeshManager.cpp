#include "MorGlobalInstancedMeshManager.h"

AMorGlobalInstancedMeshManager::AMorGlobalInstancedMeshManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->bUpdateManually = true;
}


