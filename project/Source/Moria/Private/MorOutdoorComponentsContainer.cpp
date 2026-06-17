#include "MorOutdoorComponentsContainer.h"

AMorOutdoorComponentsContainer::AMorOutdoorComponentsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIncludeInstancedFoliageInDistantGeo = false;
    this->EasySky = NULL;
}

void AMorOutdoorComponentsContainer::Setup() {
}


