#pragma once
#include "CoreMinimal.h"
#include "ECraftingType.generated.h"

UENUM(BlueprintType)
enum class ECraftingType : uint8 {
    Instant,
    Timed,
};

