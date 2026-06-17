#include "ProceduralDecorationPass.h"

FProceduralDecorationPass::FProceduralDecorationPass() {
    this->bActive = false;
    this->Density = 0.00f;
    this->DensityStandardDeviation = 0.00f;
    this->ClearanceRadius = 0.00f;
    this->ScaleMin = 0.00f;
    this->ScaleMax = 0.00f;
    this->bRandomizedYaw = false;
    this->bOrientToSurface = false;
    this->SurfaceLift = 0.00f;
    this->NoiseCutoff = 0.00f;
    this->MinEdgeClearance = 0.00f;
    this->MaxWallClearance = 0.00f;
}

