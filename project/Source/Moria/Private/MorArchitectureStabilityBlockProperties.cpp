#include "MorArchitectureStabilityBlockProperties.h"

FMorArchitectureStabilityBlockProperties::FMorArchitectureStabilityBlockProperties() {
    this->bIsSet = false;
    this->StabilityType = EMorArchitectureBlockStability::Foundation;
    this->bDestroyIfCloseToEdge = false;
}

