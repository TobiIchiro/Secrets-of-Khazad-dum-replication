#include "MorInputState_Action.h"

UMorInputState_Action::UMorInputState_Action() {
    this->AutopickupHoldDuration = 0.50f;
    this->ThrowHoldPressDuration = 0.00f;
    this->HeavyPressDuration = 0.30f;
    this->SprintAttackMinVelocity = 350.00f;
    this->JumpAttackVelocity = 0.00f;
    this->TargetAcquisitionMaxDistance = 2000.00f;
    this->TargetRangeEquivalentTo90Degrees = 2000.00f;
    this->TargetLockRangeEquivalentTo90Degrees = 10000.00f;
    this->TargetRenderedWithinSeconds = 0.20f;
    this->UseLookForTargetingWithinThisManySeconds = 1.00f;
    this->TargetLockReticleClass = NULL;
    this->TargetSwitchMouseThreshold = 10.00f;
    this->TargetSwitchGamepadThreshold = 0.00f;
    this->TargetSwitchScreenDistEquivalentTo90Degrees = 0.50f;
    this->TargetSwitchMinLookRestTime = 0.00f;
    this->bSwapTargetLockOnPCWithMouseSwipes = false;
    this->NumEmotes = 4;
    this->Emote_Dynamic_ExecuteAfterTime = 1.00f;
    this->TargetLockReticle = NULL;
}

void UMorInputState_Action::SwitchTarget(bool bSwitchClockwise) {
}

void UMorInputState_Action::AcquireBestPotentialTarget(float RangeEquivalentTo90Deg, bool bAlwaysUseControllerRotation) {
}


