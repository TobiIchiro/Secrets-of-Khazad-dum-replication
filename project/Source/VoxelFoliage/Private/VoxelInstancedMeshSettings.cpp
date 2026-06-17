#include "VoxelInstancedMeshSettings.h"

FVoxelInstancedMeshSettings::FVoxelInstancedMeshSettings() {
    this->bCastShadow = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastShadowAsTwoSided = false;
    this->bReceivesDecals = false;
    this->bUseAsOccluder = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilValue = 0;
    this->BuildDelay = 0.00f;
    this->HISMTemplate = NULL;
}

