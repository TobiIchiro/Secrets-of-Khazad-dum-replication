#pragma once
#include "CoreMinimal.h"
#include "EChallengeFootprint.generated.h"

UENUM(BlueprintType)
enum class EChallengeFootprint : uint8 {
    Tiny,
    Small,
    Medium,
    Large,
    BubbleWide,
    Num,
};

