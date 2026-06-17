#include "ProcCell.h"
#include "Components/SceneComponent.h"

AProcCell::AProcCell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BubbleType = ECellContents::Uninitialized;
    this->bNexus = false;
    this->bCanBuildInBubble = true;
    this->InterfacePriority = 0;
    this->VisualMapStyle = EMorBubbleVisualMapStyle::Urban;
    this->ZoneAdoption = EZoneAdoption::LocalZone;
}


