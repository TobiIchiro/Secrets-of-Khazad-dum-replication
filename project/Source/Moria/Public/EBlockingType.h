#pragma once
#include "CoreMinimal.h"
#include "EBlockingType.generated.h"

UENUM(BlueprintType)
enum class EBlockingType : uint8 {
    Decoration,
    Rocks,
    BothRocksAndDeco = 3,
};

