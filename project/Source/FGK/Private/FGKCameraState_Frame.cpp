#include "FGKCameraState_Frame.h"

UFGKCameraState_Frame::UFGKCameraState_Frame() {
    this->bDontUsePitchOrbitWarping = true;
    this->FramingInnerRange = 0.00f;
    this->FramingOuterRange = 0.00f;
    this->FramingSmoothing = 1.00f;
    this->bFlipLateralOffsetIfTargetOnLeft = true;
    this->MinimumFlatPivotDistanceFromTarget = 100.00f;
    this->bUseTargetActorLocation = true;
    this->bPullbackToFitTargetOnScreen = true;
}


