#include "FGKCameraStateSettings.h"

FFGKCameraStateSettings::FFGKCameraStateSettings() {
    this->FOVScale = 0.00f;
    this->AdditionalFOVScaleFromSpeed = 0.00f;
    this->CameraStateInputYawScale = 0.00f;
    this->CameraStateInputPitchScale = 0.00f;
    this->CameraOffset_X = 0.00f;
    this->CameraOffset_Y = 0.00f;
    this->CameraOffset_Z = 0.00f;
    this->PivotOffset_X = 0.00f;
    this->PivotOffset_Y = 0.00f;
    this->PivotOffset_Z = 0.00f;
    this->PivotSmoothing = 0.00f;
    this->FaceCameraPullbackScalar = 0.00f;
    this->FaceCameraPullsideScalar = 0.00f;
    this->PitchDownPivotShiftForwardFactor = 0.00f;
    this->PitchUpPullbackRemovalFactorPadding = 0.00f;
    this->PitchUpPivotShiftCameraRight = 0.00f;
    this->PitchUpPivotShiftWorldUp = 0.00f;
}

