#include "MorDecalReticle.h"

AMorDecalReticle::AMorDecalReticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Phase = 0.00f;
    this->PulseRate = 0.50f;
    this->PulseSize = 0.06f;
    this->DecalComp = NULL;
}


