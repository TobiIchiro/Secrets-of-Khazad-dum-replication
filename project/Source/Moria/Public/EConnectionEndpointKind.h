#pragma once
#include "CoreMinimal.h"
#include "EConnectionEndpointKind.generated.h"

UENUM(BlueprintType)
enum class EConnectionEndpointKind : uint8 {
    Zone,
    Landmark,
    LandmarkInterface,
    LandmarkSubcell,
    CellAbsolute,
};

