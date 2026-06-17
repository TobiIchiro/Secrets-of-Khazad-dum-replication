#pragma once
#include "CoreMinimal.h"
#include "EMorTransporterPadType.generated.h"

UENUM(BlueprintType)
enum class EMorTransporterPadType : uint8 {
    Standard,
    BubbleConnection,
    PlayerStart,
};

