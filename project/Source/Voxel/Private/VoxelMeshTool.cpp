#include "VoxelMeshTool.h"

UVoxelMeshTool::UVoxelMeshTool() {
    this->ToolName = TEXT("Mesh");
    this->Stride = 0.00f;
    this->bSmoothImport = false;
    this->Smoothness = 0.50f;
    this->bProgressiveStamp = false;
    this->Speed = 0.10f;
    this->bSculpt = true;
    this->bPaint = true;
    this->PaintMask = 4095;
    this->bPaintColors = true;
    this->bImportColorsFromMesh = true;
    this->bPaintUVs = true;
    this->bImportUVsFromMesh = true;
    this->bPaintIndex = false;
    this->IndexToPaint = 0;
    this->UVsRenderTarget = NULL;
    this->ColorsRenderTarget = NULL;
    this->RenderTargetSize = 4096;
    this->bAbsoluteScale = false;
    this->bAlignToNormal = true;
    this->bAlignToMovement = true;
}


