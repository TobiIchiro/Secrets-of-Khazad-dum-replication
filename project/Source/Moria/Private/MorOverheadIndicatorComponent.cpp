#include "MorOverheadIndicatorComponent.h"

UMorOverheadIndicatorComponent::UMorOverheadIndicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateIcon = EMorOverheadIndicatorState::Idle;
    this->RangeIcon = EMorOverheadIndicatorRange::Interact;
    this->bIsSpeechIconInRange = false;
    this->InteractRangeMaxValue = 0.00f;
    this->NearRangeMaxValue = 0.00f;
    this->FarRangeMaxValue = 0.00f;
    this->SpeechIconVisibilityDistance = 0.00f;
}


