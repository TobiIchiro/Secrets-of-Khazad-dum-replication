#pragma once
#include "CoreMinimal.h"
#include "EFGKEarlyExitTypes.generated.h"

UENUM(BlueprintType)
enum class EFGKEarlyExitTypes : uint8 {
    Move,
    Ranged,
    Melee,
    GetUp,
    Fall,
    Dash,
    Jump,
    Release,
};

