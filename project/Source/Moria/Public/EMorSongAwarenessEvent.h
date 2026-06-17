#pragma once
#include "CoreMinimal.h"
#include "EMorSongAwarenessEvent.generated.h"

UENUM(BlueprintType)
enum class EMorSongAwarenessEvent : uint8 {
    StartedSinging,
    Completed,
};

