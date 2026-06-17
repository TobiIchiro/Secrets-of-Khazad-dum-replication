#pragma once
#include "CoreMinimal.h"
#include "ESplitBubble.generated.h"

UENUM(BlueprintType)
enum class ESplitBubble : uint8 {
    Standard,
    TopCell,
    BottomCell,
    Combined,
};

