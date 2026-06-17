#include "MorGameplayLightManager.h"

AMorGameplayLightManager::AMorGameplayLightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightSourcesLightMax = 40.00f;
    this->ShadowSourcesNegativeLightMax = -100.00f;
    this->FinalLightMin = 0.00f;
    this->FinalLightMax = 100.00f;
    this->ProxyLightFalloffCurve = NULL;
    this->DefaultAmbientLightCurve = NULL;
}


