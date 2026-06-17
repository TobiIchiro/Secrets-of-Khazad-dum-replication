#include "SubtitleEventParameters.h"

FSubtitleEventParameters::FSubtitleEventParameters() {
    this->bFilterSpeakerName = false;
    this->UseSpeakerNameColorOverride = false;
    this->SpeakerTeam = EMoriaTeam::Dwarves;
    this->VODuration = 0.00f;
}

