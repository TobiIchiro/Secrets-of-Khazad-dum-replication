#pragma once
#include "CoreMinimal.h"
#include "EFGKPartialHitReactionSlot.generated.h"

UENUM(BlueprintType)
enum class EFGKPartialHitReactionSlot : uint8 {
    Head,
    Torso,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
};

