#pragma once
#include "CoreMinimal.h"
#include "EBoneHitFilter.generated.h"

UENUM(BlueprintType)
enum class EBoneHitFilter : uint8 {
    None,
    Head,
    Chest,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
};

