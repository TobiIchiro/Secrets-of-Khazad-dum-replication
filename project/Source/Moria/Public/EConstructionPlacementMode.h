#pragma once
#include "CoreMinimal.h"
#include "EConstructionPlacementMode.generated.h"

UENUM(BlueprintType)
enum class EConstructionPlacementMode : uint8 {
    Standard,
    Alternate,
    AlternateOverEdge,
};

