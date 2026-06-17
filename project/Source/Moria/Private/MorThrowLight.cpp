#include "MorThrowLight.h"

AMorThrowLight::AMorThrowLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EMorThrowLightState::Uninitialized;
}


void AMorThrowLight::SetState(EMorThrowLightState NewState) {
}

EMorThrowLightState AMorThrowLight::GetState() const {
    return EMorThrowLightState::Uninitialized;
}

float AMorThrowLight::GetDurationSeconds() const {
    return 0.0f;
}


