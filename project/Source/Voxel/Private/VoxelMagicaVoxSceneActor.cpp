#include "VoxelMagicaVoxSceneActor.h"
#include "Components/SceneComponent.h"

AVoxelMagicaVoxSceneActor::AVoxelMagicaVoxSceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->VoxelSize = 100.00f;
    this->VoxelWorld = NULL;
}

void AVoxelMagicaVoxSceneActor::SetScene(UVoxelMagicaVoxScene* Scene) {
}

void AVoxelMagicaVoxSceneActor::ApplyVoxelSize() {
}


