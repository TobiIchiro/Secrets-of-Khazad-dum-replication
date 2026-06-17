#include "VoxelFoliage.h"

UVoxelFoliage::UVoxelFoliage() {
    this->ActorClass = NULL;
    this->bEnableSlopeRestriction = true;
    this->bEnableHeightRestriction = false;
    this->HeightRestrictionFalloff = 0.00f;
    this->RotationAlignment = EVoxelFoliageRotation::AlignToWorldUp;
    this->bRandomYaw = true;
    this->RandomPitchAngle = 6.00f;
    this->bSave = true;
    this->bDoNotDespawn = false;
}


