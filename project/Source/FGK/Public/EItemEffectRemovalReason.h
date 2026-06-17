#pragma once
#include "CoreMinimal.h"
#include "EItemEffectRemovalReason.generated.h"

UENUM(BlueprintType)
enum class EItemEffectRemovalReason : uint8 {
    Expired,
    Removed,
};

