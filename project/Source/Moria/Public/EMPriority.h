#pragma once
#include "CoreMinimal.h"
#include "EMPriority.generated.h"

UENUM(BlueprintType)
enum class EMPriority : uint8 {
    None,
    Lowest,
    Low,
    Medium,
    High,
    Highest,
};

