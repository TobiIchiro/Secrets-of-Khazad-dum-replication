#include "VoxelProceduralMeshComponent.h"

UVoxelProceduralMeshComponent::UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Stationary;
    this->bCastShadowAsTwoSided = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::EvenIfNotCollidable;
    this->BodySetup = NULL;
    this->BodySetupBeingCooked = NULL;
    this->StaticMeshComponent = NULL;
}

void UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen) {
}


bool UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld) {
    return false;
}


