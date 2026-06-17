#include "VoxelInvokerComponentBase.h"

UVoxelInvokerComponentBase::UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInvokerEnabled = true;
    this->bEditorOnlyInvoker = false;
    this->bUseForEvents = true;
    this->bUseForPriorities = true;
}

bool UVoxelInvokerComponentBase::ShouldUseInvoker_Implementation(AVoxelWorld* VoxelWorld) const {
    return false;
}

void UVoxelInvokerComponentBase::RefreshAllVoxelInvokers() {
}

bool UVoxelInvokerComponentBase::IsLocalInvoker_Implementation() const {
    return false;
}

FIntVector UVoxelInvokerComponentBase::GetInvokerVoxelPosition_Implementation(AVoxelWorld* VoxelWorld) const {
    return FIntVector{};
}

FVoxelInvokerSettings UVoxelInvokerComponentBase::GetInvokerSettings_Implementation(AVoxelWorld* VoxelWorld) const {
    return FVoxelInvokerSettings{};
}


