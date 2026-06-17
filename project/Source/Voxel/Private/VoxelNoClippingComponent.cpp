#include "VoxelNoClippingComponent.h"

UVoxelNoClippingComponent::UVoxelNoClippingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickRate = 0.10f;
    this->SearchRange = 5;
    this->bEnableDefaultBehavior = true;
    this->Speed = 6000.00f;
    this->bIsPlanet = false;
    this->bIsInsideSurface = false;
}

bool UVoxelNoClippingComponent::ShouldUseVoxelWorld_Implementation(AVoxelWorld* VoxelWorld) {
    return false;
}


