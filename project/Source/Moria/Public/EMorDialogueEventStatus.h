#pragma once
#include "CoreMinimal.h"
#include "EMorDialogueEventStatus.generated.h"

UENUM(BlueprintType)
enum class EMorDialogueEventStatus : uint8 {
    Completed,
    Cancelled,
    DidNotPlay,
};

