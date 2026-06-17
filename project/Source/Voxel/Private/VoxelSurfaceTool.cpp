#include "VoxelSurfaceTool.h"

UVoxelSurfaceTool::UVoxelSurfaceTool() {
    this->ToolName = TEXT("Surface");
    this->bShowPaintMaterial = true;
    this->bSculpt = true;
    this->SculptStrength = 0.50f;
    this->bPropagateMaterials = true;
    this->bPaint = false;
    this->PaintStrength = 0.50f;
    this->b2DBrush = false;
    this->bMovementAffectsStrength = false;
    this->Stride = 0.00f;
    this->bAlignToMovement = true;
    this->bModulateStrengthByDeltaTime = true;
    this->bEnableFalloff = true;
    this->FalloffType = EVoxelFalloff::Smooth;
    this->Falloff = 0.50f;
    this->bUseMask = false;
    this->MaskGeneratorCache_RenderTexture = NULL;
}


