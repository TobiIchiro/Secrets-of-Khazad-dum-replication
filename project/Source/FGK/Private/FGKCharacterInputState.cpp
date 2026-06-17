#include "FGKCharacterInputState.h"

UFGKCharacterInputState::UFGKCharacterInputState() {
    this->bSprintIsToggle = true;
    this->bWalkIsToggle = true;
    this->bCrouchIsToggle = true;
    this->bInteractOnRelease = false;
    this->LookUpDownRate = 1.25f;
    this->LookLeftRightRate = 1.25f;
    this->RollDoubleTapTimeout = 0.30f;
    this->ViewModeSwitchHoldTime = 0.20f;
    this->TargetAcquisitionMaxDistance = 10000.00f;
    this->TargetRangeEquivalentTo90Degrees = 5000.00f;
    this->TargetRenderedWithinSeconds = 0.20f;
    this->TargetSwitchMouseThreshold = 10.00f;
    this->TargetSwitchGamepadThreshold = 0.00f;
    this->TargetSwitchScreenDistEquivalentTo90Degrees = 0.50f;
    this->TargetSwitchMinLookRestTime = 0.10f;
    this->PossessedCharacter = NULL;
}

void UFGKCharacterInputState::SwitchLockedTarget() {
}

void UFGKCharacterInputState::RequestMeleeAttackIfApt() {
}

void UFGKCharacterInputState::OnPawnChanged() {
}


