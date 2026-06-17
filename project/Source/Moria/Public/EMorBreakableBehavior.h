#pragma once
#include "CoreMinimal.h"
#include "EMorBreakableBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorBreakableBehavior : uint8 {
    Invalid,
    Breakable,
    Restorable,
    BreakableAndRestorable,
    StaticMeshTemp,
};

