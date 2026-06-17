#pragma once
#include "CoreMinimal.h"
#include "EFGKReactionIntensity.generated.h"

UENUM(BlueprintType)
enum class EFGKReactionIntensity : uint8 {
    None,
    Cosmetic,
    Partial,
    Fullbody,
    Stagger,
    KnockBack,
    KnockUp,
};

