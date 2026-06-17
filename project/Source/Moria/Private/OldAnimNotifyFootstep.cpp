#include "OldAnimNotifyFootstep.h"

UOldAnimNotifyFootstep::UOldAnimNotifyFootstep() {
    this->Sound = NULL;
    this->AttachPointName = TEXT("Root");
    this->FootstepType = EALSFootstepType::Step;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bOverrideMaskCurve = false;
}


