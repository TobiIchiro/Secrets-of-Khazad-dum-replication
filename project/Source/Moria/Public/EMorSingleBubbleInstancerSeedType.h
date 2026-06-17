#pragma once
#include "CoreMinimal.h"
#include "EMorSingleBubbleInstancerSeedType.generated.h"

UENUM(BlueprintType)
enum class EMorSingleBubbleInstancerSeedType : uint8 {
    Default,
    Random,
    Custom,
};

