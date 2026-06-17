#pragma once
#include "CoreMinimal.h"
#include "EFGKMovementAction.generated.h"

UENUM(BlueprintType)
enum class EFGKMovementAction : uint8 {
    None,
    LowMantle,
    HighMantle,
    Rolling,
    GettingUp,
};

