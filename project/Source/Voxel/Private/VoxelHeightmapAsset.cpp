#include "VoxelHeightmapAsset.h"

UVoxelHeightmapAsset::UVoxelHeightmapAsset() {
    this->Scale = 1.00f;
    this->HeightScale = 1.00f;
    this->HeightOffset = 0.00f;
    this->bInfiniteExtent = false;
    this->AdditionalThickness = 0.00f;
    this->Precision = 4.00f;
    this->Width = 0;
    this->Height = 0;
    this->VoxelCustomVersion = 0;
    this->MaterialConfigFlag = 0;
}

int32 UVoxelHeightmapAsset::GetWidth() const {
    return 0;
}

int32 UVoxelHeightmapAsset::GetHeight() const {
    return 0;
}


