#include "FGKCineCameraState.h"

UFGKCineCameraState::UFGKCineCameraState() {
    this->TransitionDuration = 1.00f;
    this->BlendExp = 2.00f;
    this->Steps = 2;
    this->EasingFunction = EEasingFunc::Linear;
    this->bResetPositionOnEnd = true;
    this->Camera = NULL;
}


