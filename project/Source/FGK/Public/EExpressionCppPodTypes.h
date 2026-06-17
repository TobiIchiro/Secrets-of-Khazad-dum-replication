#pragma once
#include "CoreMinimal.h"
#include "EExpressionCppPodTypes.generated.h"

UENUM()
enum class EExpressionCppPodTypes : int8 {
    INVALID = -1,
    Bool = 0,
    Uint8,
    Int8,
    Uint16,
    Int16,
    UInt32,
    Int32,
    UInt64,
    Int64,
    Double,
    Float,
    Name,
    String,
};

