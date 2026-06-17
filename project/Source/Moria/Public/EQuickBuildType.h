#pragma once
#include "CoreMinimal.h"
#include "EQuickBuildType.generated.h"

UENUM(BlueprintType)
enum class EQuickBuildType : uint8 {
    Platform,
    Ladder,
    Num,
};

