#pragma once
#include "CoreMinimal.h"
#include "EAITargetQueryFlags.generated.h"

UENUM(BlueprintType)
enum class EAITargetQueryFlags : uint8 {
    None,
    UseAttitude,
    UseNav,
    CheckVisibility = 4,
    AllowPartial = 8,
    PreferExisting = 16,
    PreferUnique = 32,
    CheckDesiredState = 64,
};

