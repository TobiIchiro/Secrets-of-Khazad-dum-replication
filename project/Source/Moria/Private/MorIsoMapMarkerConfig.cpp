#include "MorIsoMapMarkerConfig.h"

FMorIsoMapMarkerConfig::FMorIsoMapMarkerConfig() {
    this->bRotate = false;
    this->bIgnoreIsoRotation = false;
    this->bIgnoreIsoTransform = false;
    this->bIgnoreZoomScale = false;
    this->bOverrideAtlasTile = false;
    this->Scale = 0.00f;
    this->FocusScale = 0.00f;
}

