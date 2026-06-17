#include "FGKAnimNotifyFootstepBase.h"
#include "EFGKAnimNotify.h"

UFGKAnimNotifyFootstepBase::UFGKAnimNotifyFootstepBase() {
    this->NotifyType = EFGKAnimNotify::Footstep;
    this->AttachPointName = TEXT("Root");
    this->FootstepType = EFGKFootstepType::Step;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bOverrideMaskCurve = false;
    this->bInhibitFootprint = false;
    this->bIsLeft = false;
}


