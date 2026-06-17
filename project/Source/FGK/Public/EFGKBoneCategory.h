#pragma once
#include "CoreMinimal.h"
#include "EFGKBoneCategory.generated.h"

UENUM(BlueprintType)
enum class EFGKBoneCategory : uint8 {
    None,
    Head,
    Chest,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
};

