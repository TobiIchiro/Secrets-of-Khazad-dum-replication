#pragma once
#include "CoreMinimal.h"
#include "EFGKHitFromDirection.generated.h"

UENUM(BlueprintType)
enum class EFGKHitFromDirection : uint8 {
    Front,
    Back,
    Left,
    Right,
    Invalid,
};

