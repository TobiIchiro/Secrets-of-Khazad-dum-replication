#include "VoxelErosion.h"

UVoxelErosion::UVoxelErosion() {
    this->Size = 1024;
    this->DeltaTime = 0.00f;
    this->Scale = 1.00f;
    this->Gravity = 10.00f;
    this->SedimentCapacity = 0.05f;
    this->SedimentDissolving = 0.00f;
    this->SedimentDeposition = 0.00f;
    this->RainStrength = 2.00f;
    this->Evaporation = 1.00f;
}

void UVoxelErosion::Step(int32 Count) {
}

bool UVoxelErosion::IsInitialized() const {
    return false;
}

void UVoxelErosion::Initialize() {
}

FVoxelFloatTexture UVoxelErosion::GetWaterHeightTexture() {
    return FVoxelFloatTexture{};
}

FVoxelFloatTexture UVoxelErosion::GetTerrainHeightTexture() {
    return FVoxelFloatTexture{};
}

FVoxelFloatTexture UVoxelErosion::GetSedimentTexture() {
    return FVoxelFloatTexture{};
}


