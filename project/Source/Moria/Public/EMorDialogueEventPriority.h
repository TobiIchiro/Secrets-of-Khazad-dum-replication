#pragma once
#include "CoreMinimal.h"
#include "EMorDialogueEventPriority.generated.h"

UENUM(BlueprintType)
enum class EMorDialogueEventPriority : uint8 {
    None,
    Low,
    Medium,
    High,
    VeryHigh,
};

