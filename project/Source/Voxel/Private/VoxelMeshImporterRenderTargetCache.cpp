#include "VoxelMeshImporterRenderTargetCache.h"

FVoxelMeshImporterRenderTargetCache::FVoxelMeshImporterRenderTargetCache() {
    this->ColorsRenderTarget = NULL;
    this->UVsRenderTarget = NULL;
    this->LastRenderedColorsMaterial = NULL;
    this->LastRenderedUVsMaterial = NULL;
    this->LastRenderedRenderTargetSize = 0;
}

