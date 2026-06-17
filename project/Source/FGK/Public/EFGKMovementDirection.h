#pragma once
#include "CoreMinimal.h"
#include "EFGKMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EFGKMovementDirection : uint8 {
    Forward,
    Right,
    Left,
    Backward,
};

