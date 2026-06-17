#pragma once
#include "CoreMinimal.h"
#include "EFGKAIAwarenessLevel.generated.h"

UENUM(BlueprintType)
enum class EFGKAIAwarenessLevel : uint8 {
    None,
    Partial,
    Full,
};

