#pragma once
#include "CoreMinimal.h"
#include "EMorMemReportMode.generated.h"

UENUM(BlueprintType)
enum class EMorMemReportMode : uint8 {
    Full,
    Normal,
    None,
};

