#pragma once
#include "CoreMinimal.h"
#include "EFGKReactionStance.generated.h"

UENUM(BlueprintType)
enum class EFGKReactionStance : uint8 {
    Standing,
    Crouching,
    InAir,
};

