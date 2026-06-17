#include "MoriaVoxelWorld.h"
#include "MorVoxelEffectsComponent.h"

AMoriaVoxelWorld::AMoriaVoxelWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableNavmesh = true;
    this->DroppedItem = NULL;
    this->bSpawnRubbleFromOre = false;
    this->DefaultMineralProperties = NULL;
    this->VoxelEffects = CreateDefaultSubobject<UMorVoxelEffectsComponent>(TEXT("Effects Component"));
    this->StaleCarveTime = 5.00f;
    this->WorldLayout = NULL;
    this->VoxelMaterialSwap = NULL;
}

void AMoriaVoxelWorld::SpawnVfxAndSound_Implementation(const FHitResult& OutHit, UNiagaraSystem* VfxA, UNiagaraSystem* VfxB, UAkAudioEvent* Sound) {
}


