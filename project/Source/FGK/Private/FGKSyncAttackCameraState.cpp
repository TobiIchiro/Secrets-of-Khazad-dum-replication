#include "FGKSyncAttackCameraState.h"

UFGKSyncAttackCameraState::UFGKSyncAttackCameraState() {
    this->TransitionDuration = 1.00f;
    this->BlendExp = 2.00f;
    this->Steps = 2;
    this->EasingFunction = EEasingFunc::Linear;
    this->CameraAnim = NULL;
}


