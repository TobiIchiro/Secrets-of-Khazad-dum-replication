#pragma once
#include "CoreMinimal.h"
#include "EReactionSeverity.generated.h"

UENUM(BlueprintType)
enum class EReactionSeverity : uint8 {
    Cosmetic,
    Light,
    Heavy,
    Stagger,
    Knockdown,
    HeavyKnockdown,
    Kill,
};

