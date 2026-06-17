#include "GlobalInstancedMeshManager.h"
#include "GlobalInstancedRootComponent.h"

AGlobalInstancedMeshManager::AGlobalInstancedMeshManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->RootComponent = CreateDefaultSubobject<UGlobalInstancedRootComponent>(TEXT("MeshParent"));
    this->bUpdateManually = false;
    this->AutoUpdateFrameBudget = 0.00f;
    this->MeshParent = (UGlobalInstancedRootComponent*)RootComponent;
}


