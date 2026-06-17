#include "ProcVoxelRegionMesh.h"
#include "Components/StaticMeshComponent.h"

AProcVoxelRegionMesh::AProcVoxelRegionMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}


