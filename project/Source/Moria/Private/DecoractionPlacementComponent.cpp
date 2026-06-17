#include "DecoractionPlacementComponent.h"

UDecoractionPlacementComponent::UDecoractionPlacementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMultipleLayers = false;
    this->ClearanceDistance = 200.00f;
}


