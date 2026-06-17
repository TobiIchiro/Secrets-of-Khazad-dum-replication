#include "MorWaypointData.h"

FMorWaypointData::FMorWaypointData() {
    this->ID = 0;
    this->bShowAtAll = false;
    this->bUnderSiege = false;
    this->bForceDefaultDescription = false;
    this->bDefaultDescriptionNeedFiltering = false;
    this->bDeleteWhenOverlapDiscoveryExtents = false;
    this->bHideWhenOverlapDiscoveryExtents = false;
    this->CreatorType = EMorWaypointCreatorType::NoCreator;
    this->bIsEditedByLocalPlayer = false;
    this->bIsHiddenForLocalPlayerInWorld = false;
    this->bIsHiddenForLocalPlayerInMinimap = false;
    this->bIsHiddenForOutdoors = false;
    this->bShouldSave = false;
}

