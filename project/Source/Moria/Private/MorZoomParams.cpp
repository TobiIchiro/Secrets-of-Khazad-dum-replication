#include "MorZoomParams.h"

FMorZoomParams::FMorZoomParams() {
    this->WaypointId = 0;
    this->bAbsoluteLocation = false;
    this->TeleportType = EMorTeleportType::None;
    this->bValid = false;
}

