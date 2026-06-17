#include "FGKCombatCameraState.h"

UFGKCombatCameraState::UFGKCombatCameraState() {
    this->IncludeTargetsRadius = 0.00f;
    this->MaxCombatFramePullback = 600.00f;
    this->CombatFramePadding = 100.00f;
    this->OtherTargetSmoothing = 0.10f;
    this->NewTargetFadeInTime = 0.75f;
    this->OldTargetFadeOutTime = 0.50f;
    this->bAlwaysShowPotentialTarget = true;
    this->bAlwaysShowLastMeleeTarget = false;
}


