#include "FGKCameraState.h"

UFGKCameraState::UFGKCameraState() {
    this->bRespectPriorStateBlendOutTime = true;
    this->BlendInTime = 0.25f;
    this->BlendInType = EFGKInterpolationType::Smooth;
    this->BlendInCurve = NULL;
    this->BlendOutTime = 0.00f;
    this->PullbackForMaxSpeed = 0.00f;
    this->RubberBandingMinSpeed = 10.00f;
    this->RubberBandingMaxSpeed = 30.00f;
    this->bUseDragYawRotation = false;
    this->bUseDragPitchRotation = false;
    this->bYesChangeRotationEvenOnPC = false;
    this->VelYawRotationSmoothing = 2.00f;
    this->ExponentialSmoothing = 4.00f;
    this->bShouldRestorePitch = false;
    this->PitchDefault = 0.00f;
    this->bShouldRestoreYaw = false;
    this->RotationDragLookDelay = 3.00f;
    this->bShouldRestoreYawImmediatelyOnTurn = false;
    this->bRotatePivotOnlyInYaw = false;
    this->PivotOffsetCurve = NULL;
    this->bMaintainPullback = false;
    this->bDontUsePitchOrbitWarping = false;
    this->bForceControllerToRelativeRotation = false;
    this->bBlendToRelativeRotation = false;
    this->bRelativeRotation_IgnorePitch = false;
    this->bRelativeRotation_IgnoreYaw = false;
    this->bReleaseSnappedRotationAfterBlend = false;
    this->bOnlySmoothPivotZ = false;
    this->ProbeFromCapsuleOffsetZ = 5.00f;
    this->ProbeFromCapsuleOffsetX = 0.00f;
    this->Controller = NULL;
    this->Character = NULL;
    this->PriorActiveLeaf = NULL;
}

FTransform UFGKCameraState::GetPivotTarget(float DeltaTime) {
    return FTransform{};
}

float UFGKCameraState::GetBlendInAlpha() const {
    return 0.0f;
}

float UFGKCameraState::ExponentialLerpValue(float Rate, float DeltaTime) const {
    return 0.0f;
}


