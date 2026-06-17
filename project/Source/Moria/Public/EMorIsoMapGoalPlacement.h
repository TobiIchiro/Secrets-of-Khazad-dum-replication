#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapGoalPlacement.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapGoalPlacement : uint8 {
    None,
    OnPath,
    UnderWaypoint,
};

