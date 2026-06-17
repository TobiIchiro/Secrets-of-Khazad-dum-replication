#include "MorShallowWaterManager.h"

AMorShallowWaterManager::AMorShallowWaterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FluidNinjaBlueprint = NULL;
    this->bEnableDebugDraw = true;
    this->FluidNinjaActor = NULL;
}


