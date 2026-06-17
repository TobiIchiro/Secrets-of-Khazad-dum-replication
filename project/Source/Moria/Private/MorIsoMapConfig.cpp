#include "MorIsoMapConfig.h"

FMorIsoMapConfig::FMorIsoMapConfig() {
    this->ChapterTransitionSpeed = 0.00f;
    this->ClampLayerOnChapterChange = EMorIsoMapLayerClampType::None;
    this->ForceLayerClamp = EMorIsoMapLayerClampType::None;
    this->PanTransitionSpeed = 0.00f;
    this->PanCellMargin = 0;
    this->PanClampSpace = EMorIsoMapPanClampSpace::CellSpace;
    this->PanClampBounds = EMorIsoMapPanClampBounds::WorldlayoutBounds;
    this->bCenterPanOnChapterChange = false;
    this->bClampPanOnLayerChange = false;
    this->bReversedZoomControl = false;
    this->ZoomTransitionSpeed = 0.00f;
    this->ZoomSteps = 0;
    this->DefaultZoomStep = 0;
    this->MinZoomCells = 0.00f;
    this->MaxZoomCells = 0.00f;
    this->DefaultZoomCells = 0.00f;
    this->LayerTransitionSpeed = 0.00f;
    this->FocusTransitionSpeed = 0.00f;
    this->GoalPlacement = EMorIsoMapGoalPlacement::None;
}

