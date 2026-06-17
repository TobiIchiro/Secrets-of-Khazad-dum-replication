#pragma once
#include "CoreMinimal.h"
#include "EJumpLinkType.generated.h"

UENUM(BlueprintType)
enum class EJumpLinkType : uint8 {
    Vertical,
    Horizontal,
    VerticalAndHorizontal,
};

