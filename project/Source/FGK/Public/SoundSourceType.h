#pragma once
#include "CoreMinimal.h"
#include "SoundSourceType.generated.h"

UENUM(BlueprintType)
enum class SoundSourceType : uint8 {
    Default,
    Body,
    Voice,
    Unattached,
};

