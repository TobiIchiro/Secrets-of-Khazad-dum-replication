#pragma once
#include "CoreMinimal.h"
#include "EMorSurfaceContextRequirementRule.generated.h"

UENUM(BlueprintType)
enum class EMorSurfaceContextRequirementRule : uint8 {
    RequireWithinRange,
    IgnoreMin,
    IgnoreMax,
};

