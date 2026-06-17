#pragma once
#include "CoreMinimal.h"
#include "EFGKTraceMode.generated.h"

UENUM(BlueprintType)
enum class EFGKTraceMode : uint8 {
    SINGLE_LINE_TRACE,
    SPHERE_TRACE,
};

