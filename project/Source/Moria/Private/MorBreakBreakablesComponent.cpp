#include "MorBreakBreakablesComponent.h"

UMorBreakBreakablesComponent::UMorBreakBreakablesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceFromCapsuleEdgeToAABBToBreak = 200.00f;
    this->bDrawDebugLines = false;
}


