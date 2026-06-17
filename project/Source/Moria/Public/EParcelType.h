#pragma once
#include "CoreMinimal.h"
#include "EParcelType.generated.h"

UENUM(BlueprintType)
enum class EParcelType : uint8 {
    Fixed,
    FreeHorizontal,
    Free,
    EmbeddedBottom,
};

