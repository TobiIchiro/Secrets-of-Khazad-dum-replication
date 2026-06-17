#include "MorBubbleAutomaticReverbVolumeSettings.h"

FMorBubbleAutomaticReverbVolumeSettings::FMorBubbleAutomaticReverbVolumeSettings() {
    this->bEnableLateReverb = false;
    this->SendLevel = 0.00f;
    this->FadeRate = 0.00f;
    this->AuxBus = NULL;
    this->Priority = 0.00f;
}

