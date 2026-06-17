#pragma once
#include "CoreMinimal.h"
#include "EMorResourceContainerType.generated.h"

UENUM(BlueprintType)
enum class EMorResourceContainerType : uint8 {
    Receptacle,
    OreVein,
    Surface,
    Staging,
    Fallback,
};

