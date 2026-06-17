#include "MorLayoutParcelizer.h"

UMorLayoutParcelizer::UMorLayoutParcelizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialLayer = 11;
    this->ParcelRegionsPerZone = 16;
    this->ParcelDensity = 0.20f;
}


