#pragma once
#include "CoreMinimal.h"
#include "EMorConstructionPermitSize.generated.h"

UENUM(BlueprintType)
enum class EMorConstructionPermitSize : uint8 {
    Campfire,
    Mini,
    Small,
    Medium,
    Large,
    Num,
};

