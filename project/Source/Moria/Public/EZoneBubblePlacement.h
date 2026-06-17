#pragma once
#include "CoreMinimal.h"
#include "EZoneBubblePlacement.generated.h"

UENUM(BlueprintType)
enum class EZoneBubblePlacement : uint8 {
    Fixed,
    Center,
    Interior,
    NorthEdge,
    SouthEdge,
    EastEdge,
    WestEdge,
    Any,
};

