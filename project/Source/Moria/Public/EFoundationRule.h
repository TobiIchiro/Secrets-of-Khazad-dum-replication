#pragma once
#include "CoreMinimal.h"
#include "EFoundationRule.generated.h"

UENUM(BlueprintType)
enum class EFoundationRule : uint8 {
    Never,
    Always,
    FreePlaced,
};

