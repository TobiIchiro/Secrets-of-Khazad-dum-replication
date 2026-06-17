#include "FGKWidgetComponent.h"

UFGKWidgetComponent::UFGKWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistance = 100.00f;
    this->MaxDistance = 10000.00f;
    this->bEnabled = true;
    this->DistanceScaleCurve = NULL;
    this->CurDistance = 0.00f;
    this->bFaceCameraInWorldSpace = false;
    this->CharacterOwner = NULL;
}


