#include "ProcVoxelRegion.h"

AProcVoxelRegion::AProcVoxelRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Action = EVoxelRegionAction::Generate;
    this->MineralProps = NULL;
    this->bOverrideDifficulty = false;
    this->DifficultyOverride = EMDifficulty::None;
}


