#include "FGKOverlayState.h"

FFGKOverlayState::FFGKOverlayState() {
    this->State = EFGKOverlayState::Default;
    this->Default_ = false;
    this->Masculine_ = false;
    this->Feminine_ = false;
    this->Injured_ = false;
    this->HandsTied_ = false;
    this->Rifle_ = false;
    this->PistolOneHanded_ = false;
    this->PistolTwoHanded_ = false;
    this->Bow_ = false;
    this->Torch_ = false;
    this->Binoculars_ = false;
    this->Box_ = false;
    this->Barrel_ = false;
    this->Shield_ = false;
    this->MeleeTwoHanded_ = false;
}

