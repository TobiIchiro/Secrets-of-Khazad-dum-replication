#include "MorIsoMapMarkerUpdate.h"

FMorIsoMapMarkerUpdate::FMorIsoMapMarkerUpdate() {
    this->bIsVisible = false;
    this->UpdateType = EMorIsoMapMarkerUpateType::Added;
    this->LayerInt = 0;
}

