#pragma once
#include "CoreMinimal.h"
#include "EMorPlayerBlockMode.generated.h"

UENUM(BlueprintType)
enum class EMorPlayerBlockMode : uint8 {
    Unsupported,
    Directly,
    Indirectly,
    ViaProfile,
};

