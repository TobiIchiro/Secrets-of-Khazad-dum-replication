#pragma once
#include "CoreMinimal.h"
#include "EBuildProcess.generated.h"

UENUM(BlueprintType)
enum class EBuildProcess : uint8 {
    Instant,
    Planned,
    DualMode,
    Free,
};

