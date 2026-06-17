#include "WaterColliderEventAssets.h"

FWaterColliderEventAssets::FWaterColliderEventAssets() {
    this->NiagaraSystem = NULL;
    this->AudioEvent = NULL;
    this->RTPC = NULL;
    this->CooldownPeriod = 0.00f;
    this->SpawnType = EWaterParticleSpawnType::InWorld;
}

