#pragma once
#include "CoreMinimal.h"
#include "EMorWatcherTriggerType.generated.h"

UENUM(BlueprintType)
enum class EMorWatcherTriggerType : uint8 {
    Emerge,
    Attack,
    NoGo,
};

