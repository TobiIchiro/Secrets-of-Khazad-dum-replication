#include "GlobalInstancedMeshManagerConfig.h"

FGlobalInstancedMeshManagerConfig::FGlobalInstancedMeshManagerConfig() {
    this->bEnableActorInstancing = false;
    this->ActorInstancingMode = EGlobalInstancingActorMode::AlwaysCreate;
    this->DestroyMeshBucketDelay = 0.00f;
    this->MinMeshRadiusToUseAsOccluder = 0.00f;
    this->ForcedLodModel = 0;
    this->UnsupportedInstancingMaterial = NULL;
    this->InvalidTransformMaterial = NULL;
}

