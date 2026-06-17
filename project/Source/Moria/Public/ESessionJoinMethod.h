#pragma once
#include "CoreMinimal.h"
#include "ESessionJoinMethod.generated.h"

UENUM(BlueprintType)
enum class ESessionJoinMethod : uint8 {
    Manual,
    Automatic,
};

