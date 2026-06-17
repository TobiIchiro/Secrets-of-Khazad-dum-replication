#include "MoriaGameState.h"

AMoriaGameState::AMoriaGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoxelWorld = NULL;
    this->WorldLayout = NULL;
    this->BiomeManager = NULL;
    this->WorldLighting = NULL;
    this->LeaveGameHandler = NULL;
}

void AMoriaGameState::SetHouseLightsColor(const FColor& LightColor) {
}

void AMoriaGameState::SetHouseLights(float Intensity) {
}

bool AMoriaGameState::IsWorldReady() const {
    return false;
}

bool AMoriaGameState::GetShadersFinishedCompiling() {
    return false;
}


