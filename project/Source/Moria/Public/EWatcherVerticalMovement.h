#pragma once
#include "CoreMinimal.h"
#include "EWatcherVerticalMovement.generated.h"

UENUM(BlueprintType)
enum class EWatcherVerticalMovement : uint8 {
    EWatcherVerticalMovement_Submerged,
    EWatcherVerticalMovement_Surfacing,
    EWatcherVerticalMovement_Surfaced,
    EWatcherVerticalMovement_Submerging,
};

