#pragma once
#include "CoreMinimal.h"
#include "EFGKTurnInPlaceType.generated.h"

UENUM(BlueprintType)
enum class EFGKTurnInPlaceType : uint8 {
    Left_45,
    Right_45,
    Left_90,
    Right_90,
    Left_180,
    Right_180,
    Num,
};

