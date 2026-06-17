#pragma once
#include "CoreMinimal.h"
#include "EConnectionFavorSide.generated.h"

UENUM(BlueprintType)
enum class EConnectionFavorSide : uint8 {
    Any,
    North,
    South,
    East,
    West,
};

