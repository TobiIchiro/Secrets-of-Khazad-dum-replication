#pragma once
#include "CoreMinimal.h"
#include "ENumberCompareType.generated.h"

UENUM(BlueprintType)
enum class ENumberCompareType : uint8 {
    LESSTHAN,
    LESSTHANOREQUAL,
    GREATERTHAN,
    GREATERTHANOREQUAL,
    EQUAL,
    NOTEQUAL,
};

