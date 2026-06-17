#include "MorBubbleDistanceFieldParameters.h"

FMorBubbleDistanceFieldParameters::FMorBubbleDistanceFieldParameters() {
    this->SurfaceFeatureDepth = 0.00f;
    this->GridSize = 0.00f;
    this->PointSamplingScale = 0.00f;
    this->MinimumInteriorDepthScale = 0.00f;
    this->bDebugMineralTraces = false;
    this->bDebugFindingFloorDrawing = false;
    this->DefaultBulkMineral = NULL;
    this->DefaultOreMineral = NULL;
    this->VeinCapacityFraction = 0.00f;
}

