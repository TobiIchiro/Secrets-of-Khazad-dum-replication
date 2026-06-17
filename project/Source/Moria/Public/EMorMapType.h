#pragma once
#include "CoreMinimal.h"
#include "EMorMapType.generated.h"

UENUM(BlueprintType)
enum class EMorMapType : uint8 {
    None,
    GameSmall,
    GameFull,
    DevSmall,
    DevFull,
};

