#include "VoxelMeshConfig.h"

FVoxelMeshConfig::FVoxelMeshConfig() {
    this->bReceivesDecals = false;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
}

