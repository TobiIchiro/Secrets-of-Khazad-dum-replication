#pragma once
#include "CoreMinimal.h"
#include "EFGKMotionCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EFGKMotionCorrectionType : uint8 {
    None,
    CatchUp,
    Lock,
    Speed3D,
    Speed2D,
    MAX,
};

