#pragma once
#include "CoreMinimal.h"
#include "EBlockProxyType.generated.h"

UENUM(BlueprintType)
enum class EBlockProxyType : uint8 {
    Floor,
    Shelf,
    Wall,
    Overhang,
    Ceiling,
    Invalid = 255,
};

