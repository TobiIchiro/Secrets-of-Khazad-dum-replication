#pragma once
#include "CoreMinimal.h"
#include "EMorRecipeUnlockType.generated.h"

UENUM(BlueprintType)
enum class EMorRecipeUnlockType : uint8 {
    Manual,
    DiscoverDependencies,
    CollectFragments,
};

