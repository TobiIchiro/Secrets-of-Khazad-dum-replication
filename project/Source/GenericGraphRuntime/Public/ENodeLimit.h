#pragma once
#include "CoreMinimal.h"
#include "ENodeLimit.generated.h"

UENUM(BlueprintType)
enum class ENodeLimit : uint8 {
    Unlimited,
    Limited,
};

