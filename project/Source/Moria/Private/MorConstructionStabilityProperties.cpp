#include "MorConstructionStabilityProperties.h"

FMorConstructionStabilityProperties::FMorConstructionStabilityProperties() {
    this->bHasCustomFoundationStability = false;
    this->CustomFoundationStability = 0.00f;
    this->bOverrideRecipeData = false;
    this->bBuildAsFoundationOverride = false;
    this->bInheritFoundationStabilityOverride = false;
}

