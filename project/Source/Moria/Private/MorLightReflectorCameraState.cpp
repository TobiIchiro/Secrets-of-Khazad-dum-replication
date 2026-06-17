#include "MorLightReflectorCameraState.h"

UMorLightReflectorCameraState::UMorLightReflectorCameraState() {
    this->bDontUsePitchOrbitWarping = true;
    this->MorCharacter = NULL;
    this->TargetReflector = NULL;
    this->bModifyLocation = true;
    this->bUseTargetActorLocation = true;
    this->bRotateWithLightDirection = true;
    this->CameraHeightOffset = 300.00f;
    this->CameraForwardOffset = 300.00f;
    this->CameraLocationLerpRate = 10.00f;
    this->bFollowYaw = true;
    this->bFollowPitch = false;
    this->bClampYaw = false;
    this->ViewYawMin = 0.00f;
    this->ViewYawMax = 360.00f;
    this->bClampPitch = true;
    this->ViewPitchMin = -44.90f;
    this->ViewPitchMax = 44.90f;
    this->FramingInnerRange = 0.00f;
    this->FramingOuterRange = 0.00f;
    this->FramingSmoothing = 1.00f;
    this->MinimumFlatPivotDistanceFromTarget = 100.00f;
}


