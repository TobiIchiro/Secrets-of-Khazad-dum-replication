#pragma once
#include "CoreMinimal.h"
#include "EBubbleInterfaceSelection.generated.h"

UENUM(BlueprintType)
enum class EBubbleInterfaceSelection : uint8 {
    PreferLargest,
    PreferSmallest,
    Alternation,
    Random,
    WeightedRandom,
};

