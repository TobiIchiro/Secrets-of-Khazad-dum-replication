#pragma once
#include "CoreMinimal.h"
#include "EMorItemPriority.generated.h"

UENUM(BlueprintType)
enum class EMorItemPriority : uint8 {
    Trivial,
    Valuable,
    NarrativeImportant,
};

