#include "MorInputState_ActionBar.h"

UMorInputState_ActionBar::UMorInputState_ActionBar() {
    this->SelectionChangedTimeoutDuration = 1.00f;
    this->StickDeadZone = 0.25f;
    this->HeldTimes.AddDefaulted(3);
    this->RadialStepThreshold = 0.60f;
}


