#include "FGKPOIMarkerComponent.h"

UFGKPOIMarkerComponent::UFGKPOIMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowName = true;
    this->bShowDistance = true;
    this->DifferentIconForMap = NULL;
    this->bPointToCamera = true;
    this->bShowOnMap = true;
    this->bShowInWorld = true;
    this->bShowOnMapWhenQuestIsActive = true;
    this->bShowOnMapWhenQuestIsComplete = false;
    this->bShowOnMapWhenQuestIsAvailable = false;
    this->bShowFacingOnMap = false;
}

UTexture2D* UFGKPOIMarkerComponent::GetMapIcon() const {
    return NULL;
}


