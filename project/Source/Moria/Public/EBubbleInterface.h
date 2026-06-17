#pragma once
#include "CoreMinimal.h"
#include "EBubbleInterface.generated.h"

UENUM(BlueprintType)
enum class EBubbleInterface : uint8 {
    Closed,
    Standard,
    Surface,
    Window,
    Wide,
    Tall,
    Large,
    Interior,
};

