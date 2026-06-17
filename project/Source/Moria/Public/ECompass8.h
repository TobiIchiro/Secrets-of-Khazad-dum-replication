#pragma once
#include "CoreMinimal.h"
#include "ECompass8.generated.h"

UENUM(BlueprintType)
enum class ECompass8 : uint8 {
    C8_East,
    C8_SouthEast,
    C8_South,
    C8_SouthWest,
    C8_West,
    C8_NorthWest,
    C8_North,
    C8_NorthEast,
};

