#include "VoxelToolBase.h"

UVoxelToolBase::UVoxelToolBase() {
    this->VoxelWorld = NULL;
    this->ToolOverlayMaterialInstance = NULL;
    this->ToolMeshMaterialInstance = NULL;
    this->PlaneMeshMaterialInstance = NULL;
}

void UVoxelToolBase::UpdateToolMesh(UStaticMesh* Mesh, UMaterialInterface* Material, const FTransform& Transform, FName ID) {
}

void UVoxelToolBase::SetToolOverlayBounds(const FBox& Bounds) {
}

bool UVoxelToolBase::LastFrameCanEdit() const {
    return false;
}

void UVoxelToolBase::K2_UpdateRender_Implementation(UMaterialInstanceDynamic* OverlayMaterialInstance, UMaterialInstanceDynamic* MeshMaterialInstance) {
}


void UVoxelToolBase::K2_GetToolConfig_Implementation(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig) const {
}

FVoxelIntBoxWithValidity UVoxelToolBase::K2_DoEdit_Implementation() {
    return FVoxelIntBoxWithValidity{};
}

float UVoxelToolBase::GetValueAfterAxisInput(FName AxisName, float CurrentValue, float Min, float Max) const {
    return 0.0f;
}

FVector UVoxelToolBase::GetToolPreviewPosition() const {
    return FVector{};
}

FVector UVoxelToolBase::GetToolPosition() const {
    return FVector{};
}

FVector UVoxelToolBase::GetToolNormal() const {
    return FVector{};
}

FVector UVoxelToolBase::GetToolDirection() const {
    return FVector{};
}

FVoxelToolTickData UVoxelToolBase::GetTickData() const {
    return FVoxelToolTickData{};
}

float UVoxelToolBase::GetMouseMovementSize() const {
    return 0.0f;
}

FVoxelToolTickData UVoxelToolBase::GetLastFrameTickData() const {
    return FVoxelToolTickData{};
}

float UVoxelToolBase::GetDeltaTime() const {
    return 0.0f;
}

FVoxelIntBox UVoxelToolBase::GetBoundsToCache(const FVoxelIntBox& Bounds) const {
    return FVoxelIntBox{};
}

bool UVoxelToolBase::CanEdit() const {
    return false;
}


