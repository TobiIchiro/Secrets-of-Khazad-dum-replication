#include "MorShadowFluidManager.h"

AMorShadowFluidManager::AMorShadowFluidManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FluidNinjaBlueprint = NULL;
    this->bEnableDebugDraw = true;
    this->RenderTarget = NULL;
    this->FluidNinjaActor = NULL;
}

void AMorShadowFluidManager::RemoveLightDispellingActorById(const int32 IdIn) {
}

void AMorShadowFluidManager::RemoveLightDispellingActor(AActor* ActorIn) {
}

int32 AMorShadowFluidManager::AddLightDispellingActor(AActor* ActorIn, const float StartRadius, const float EndRadius) {
    return 0;
}


