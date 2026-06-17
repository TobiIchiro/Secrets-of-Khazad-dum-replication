#pragma once
#include "CoreMinimal.h"
#include "EFGKTagType.generated.h"

UENUM(BlueprintType)
enum class EFGKTagType : uint8 {
    AbilitySystem,
    FramewiseRequest,
    PersistentRequest,
};

