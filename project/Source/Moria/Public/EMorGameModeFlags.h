#pragma once
#include "CoreMinimal.h"
#include "EMorGameModeFlags.generated.h"

UENUM(BlueprintType)
enum class EMorGameModeFlags : uint8 {
    None,
    Campaign,
    Sandbox,
    All,
};

