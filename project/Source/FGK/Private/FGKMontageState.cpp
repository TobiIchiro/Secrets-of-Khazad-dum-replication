#include "FGKMontageState.h"

UFGKMontageState::UFGKMontageState() {
    this->bApplyRootMotionIfAny = true;
    this->bStopMontageOnEnd = true;
    this->bAllowLooping = false;
    this->bGravityCurveUsesMontageDuration = true;
    this->bFinishInNextSection = false;
    this->bStopAllOtherMontages = true;
    this->bAlwaysAcceptFirstMontage = false;
    this->bHasJumpedToMontageSection = false;
    this->Montage = NULL;
    this->AnimChooserDataTable = NULL;
    this->SelectedMontage = NULL;
}


