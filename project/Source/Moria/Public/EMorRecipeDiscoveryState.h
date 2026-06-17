#pragma once
#include "CoreMinimal.h"
#include "EMorRecipeDiscoveryState.generated.h"

UENUM(BlueprintType)
enum class EMorRecipeDiscoveryState : uint8 {
    None,
    Undiscovered,
    InProgress,
    Discovered = 4,
};

