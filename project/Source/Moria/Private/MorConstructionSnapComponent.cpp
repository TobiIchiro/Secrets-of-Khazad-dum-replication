#include "MorConstructionSnapComponent.h"

UMorConstructionSnapComponent::UMorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->SnapRule = ESnapPointPlacement::Even;
    this->bEnableTop = true;
    this->bEnableBottom = true;
    this->bEnableLeft = true;
    this->bEnableRight = true;
    this->bEnableFront = true;
    this->bEnableBack = true;
    this->bCustomGridSize = false;
}


