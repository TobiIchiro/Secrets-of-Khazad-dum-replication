#include "MorAftermathFogVolume.h"

AMorAftermathFogVolume::AMorAftermathFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->DecayTimeSeconds = 300.00f;
    this->bEnableIntensityDecay = true;
    this->FogMID = NULL;
}


