#pragma once
#include "CoreMinimal.h"
#include "EMorWorldType.generated.h"

UENUM(BlueprintType)
enum class EMorWorldType : uint8 {
    Default,
    Sandbox,
    Count,
};

