#pragma once
#include "CoreMinimal.h"
#include "ELayoutInterface.generated.h"

UENUM(BlueprintType)
enum class ELayoutInterface : uint8 {
    Closed,
    Open,
    Forbidden,
};

