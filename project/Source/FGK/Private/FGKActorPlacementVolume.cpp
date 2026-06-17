#include "FGKActorPlacementVolume.h"
#include "EHeightMode.h"
#include "ERotationMode.h"

AFGKActorPlacementVolume::AFGKActorPlacementVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeightMode = EHeightMode::AlignToTerrain;
    this->RotationMode = ERotationMode::AlignToTerrain;
}


