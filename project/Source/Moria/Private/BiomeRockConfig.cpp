#include "BiomeRockConfig.h"

UBiomeRockConfig::UBiomeRockConfig() {
    this->PlacementJitter = 10.00f;
    this->RotationXJitter = 10.00f;
    this->RotationYJitter = 10.00f;
    this->RotationZJitter = 10.00f;
    this->ScaleMinJitter = 0.80f;
    this->ScaleMaxJitter = 1.20f;
    this->AllowedIntrusion = 0.50f;
    this->SurfaceAlignment = 0.10f;
    this->InSet = 0.00f;
}


