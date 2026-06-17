#include "MorBubbleDefinition.h"

UMorBubbleDefinition::UMorBubbleDefinition() {
    this->bEnable = true;
    this->bNexus = false;
    this->Orientation = EMorBubbleOrientation::Orientation_0;
    this->BubbleType = ECellContents::Uninitialized;
    this->InterfacePriority = 0;
    this->VisualMapStyle = EMorBubbleVisualMapStyle::Urban;
    this->bCanBuildInBubble = true;
    this->bCanSpawnAI = true;
    this->ZoneAdoption = EZoneAdoption::LocalZone;
    this->SplitBubble = ESplitBubble::Standard;
    this->bIsUniversal = false;
    this->bIsVerticalPassage = false;
    this->GroundFloor = 0;
}

float UMorBubbleDefinition::GetTotalRoughVolumeCubicMeters() const {
    return 0.0f;
}

int32 UMorBubbleDefinition::GetSubcellCount() const {
    return 0;
}

int32 UMorBubbleDefinition::GetProxyCount() const {
    return 0;
}

int32 UMorBubbleDefinition::GetInterfaceCount() const {
    return 0;
}

int32 UMorBubbleDefinition::GetFlatSubcellCount(bool bRequireFloor) const {
    return 0;
}


