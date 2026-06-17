#include "FGKCameraInterestPointComponent.h"

UFGKCameraInterestPointComponent::UFGKCameraInterestPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Importance = 100;
    this->ScreenOffset = 0.00f;
    this->bPullBack = true;
    this->bTriggerOnlyOnce = true;
    this->TrackingStyle = ECameraInterestTrackingStyle::Time;
    this->InnerRadiusPercentage = 0.80f;
    this->TurnDuration = 1.00f;
    this->Spline = NULL;
}


