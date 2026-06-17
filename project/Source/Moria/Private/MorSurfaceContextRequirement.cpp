#include "MorSurfaceContextRequirement.h"

FMorSurfaceContextRequirement::FMorSurfaceContextRequirement() {
    this->Rule = EMorSurfaceContextRequirementRule::RequireWithinRange;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
}

