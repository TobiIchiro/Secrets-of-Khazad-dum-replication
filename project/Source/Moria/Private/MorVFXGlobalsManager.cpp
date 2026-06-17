#include "MorVFXGlobalsManager.h"

AMorVFXGlobalsManager::AMorVFXGlobalsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialParameterCollection = NULL;
    this->WindIntensity = 100.00f;
    this->WindNoiseBlend = 0.50f;
    this->WindNoiseUpdateRate = 0.00f;
    this->WindNoiseSpeed = 0.50f;
    this->WindNoiseSeed = 0;
    this->bEnableSITATest = false;
    this->MPCInstance = NULL;
    this->PreloadGameplayCue = NULL;
}


