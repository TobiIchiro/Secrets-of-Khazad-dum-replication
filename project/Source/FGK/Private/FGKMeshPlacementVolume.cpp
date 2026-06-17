#include "FGKMeshPlacementVolume.h"
#include "EHeightMode.h"
#include "ERotationMode.h"

AFGKMeshPlacementVolume::AFGKMeshPlacementVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeightMode = EHeightMode::AlignToTerrain;
    this->RotationMode = ERotationMode::AlignToTerrain;
}


