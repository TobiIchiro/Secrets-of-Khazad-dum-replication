#pragma once
#include "CoreMinimal.h"
#include "EQuickBuildRecipe.generated.h"

UENUM(BlueprintType)
enum class EQuickBuildRecipe : uint8 {
    NotApplicable,
    Platform,
    Rope,
};

