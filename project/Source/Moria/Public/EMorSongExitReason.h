#pragma once
#include "CoreMinimal.h"
#include "EMorSongExitReason.generated.h"

UENUM(BlueprintType)
enum class EMorSongExitReason : uint8 {
    Undefined,
    Distance,
    Finished,
};

