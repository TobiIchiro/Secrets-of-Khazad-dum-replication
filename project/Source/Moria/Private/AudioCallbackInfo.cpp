#include "AudioCallbackInfo.h"

FAudioCallbackInfo::FAudioCallbackInfo() {
    this->PlayingID = 0;
    this->CallbackType = EAkCallbackType::EndOfEvent;
    this->Timestamp = 0.00f;
}

