#pragma once
#include "CoreMinimal.h"
#include "EFGKAITeleportStateRotationType.generated.h"

UENUM(BlueprintType)
enum class EFGKAITeleportStateRotationType : uint8 {
    None,
    Directly,
    FacingTarget,
    MatchTarget,
};

