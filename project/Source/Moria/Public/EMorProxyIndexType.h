#pragma once
#include "CoreMinimal.h"
#include "EMorProxyIndexType.generated.h"

UENUM(BlueprintType)
enum class EMorProxyIndexType : uint8 {
    Standard,
    Dynamic,
    PseudoProxy,
    Fallback,
};

