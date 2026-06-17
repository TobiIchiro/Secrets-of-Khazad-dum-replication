#include "VoxelFlattenTool.h"

UVoxelFlattenTool::UVoxelFlattenTool() {
    this->ToolName = TEXT("Flatten");
    this->Strength = 0.10f;
    this->bFreezeOnClick = false;
    this->bUseAverage = true;
    this->bUseFixedRotation = false;
    this->bPropagateMaterials = true;
    this->bEnableFalloff = true;
    this->FalloffType = EVoxelFalloff::Smooth;
    this->Falloff = 0.50f;
}


