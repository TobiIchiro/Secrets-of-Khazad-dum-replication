#include "LightLODGroupSettings.h"

FLightLODGroupSettings::FLightLODGroupSettings() {
    this->LightLODGroup = ELightLodGroup::World;
    this->ShadowMaxDrawDistance = 0.00f;
    this->ShadowFadeLength = 0.00f;
    this->LightMaxDrawDistance = 0.00f;
    this->LightFadeLength = 0.00f;
}

