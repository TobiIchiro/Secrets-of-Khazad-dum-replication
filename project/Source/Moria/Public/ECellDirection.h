#pragma once
#include "CoreMinimal.h"
#include "ECellDirection.generated.h"

UENUM(BlueprintType)
enum class ECellDirection : uint8 {
    East,
    West,
    North,
    South,
    Up,
    Down,
};

