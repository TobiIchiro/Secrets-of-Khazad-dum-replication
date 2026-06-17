#include "VoxelSmoothTool.h"

UVoxelSmoothTool::UVoxelSmoothTool() {
    this->ToolName = TEXT("Smooth");
    this->bSculpt = true;
    this->bPaint = false;
    this->PaintMask = 4095;
    this->Strength = 1.00f;
    this->NumIterations = 10;
    this->FalloffType = EVoxelFalloff::Smooth;
    this->Falloff = 0.50f;
}


