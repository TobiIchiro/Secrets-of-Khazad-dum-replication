#include "VoxelGraphPreviewSettings.h"

UVoxelGraphPreviewSettings::UVoxelGraphPreviewSettings() {
    this->bShowStats = false;
    this->bShowValues = false;
    this->LeftToRight = EVoxelGraphPreviewAxes::X;
    this->BottomToTop = EVoxelGraphPreviewAxes::Y;
    this->Resolution = 512;
    this->ResolutionMultiplierLog = 0;
    this->ShowValue = EVoxelGraphPreviewShowValue::ShowValue;
    this->MaterialConfig = EVoxelMaterialConfig::RGB;
    this->MaterialCollection = NULL;
    this->PlaceableItemManager = NULL;
    this->VoxelSize = 100.00f;
    this->RenderType = EVoxelRenderType::MarchingCubes;
    this->PreviewType2D = EVoxelGraphPreviewType::Density;
    this->bDrawColoredDistanceField = true;
    this->MaterialPreviewType = EVoxelGraphMaterialPreviewType::RGB;
    this->MultiIndexToPreview = 0;
    this->IndexColors.AddDefaulted(11);
    this->bHybridMaterialRendering = true;
    this->CostPercentile = 0.05f;
    this->NumRangeAnalysisChunksPerAxis = 64;
    this->bHeightmapMode = true;
    this->bHeightBasedColor = true;
    this->bEnableWater = false;
    this->Height = 200.00f;
    this->StartBias = 0.01f;
    this->MaxSteps = 128;
    this->Brightness = 1.00f;
    this->ShadowDensity = 8.00f;
    this->bAutoNormalize = true;
    this->NormalizeMinValue = -1.00f;
    this->NormalizeMaxValue = 1.00f;
    this->LODToPreview = 0;
}


