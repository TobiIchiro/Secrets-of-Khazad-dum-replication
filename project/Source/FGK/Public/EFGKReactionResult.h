#pragma once
#include "CoreMinimal.h"
#include "EFGKReactionResult.generated.h"

UENUM(BlueprintType)
enum class EFGKReactionResult : uint8 {
    OnFeet,
    KnockedDown,
    Dead,
};

