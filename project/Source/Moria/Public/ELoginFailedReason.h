#pragma once
#include "CoreMinimal.h"
#include "ELoginFailedReason.generated.h"

UENUM(BlueprintType)
enum class ELoginFailedReason : uint8 {
    None,
    NativeOss,
    ActiveOss,
};

