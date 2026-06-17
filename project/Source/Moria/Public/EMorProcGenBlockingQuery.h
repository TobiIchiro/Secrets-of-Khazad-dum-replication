#pragma once
#include "CoreMinimal.h"
#include "EMorProcGenBlockingQuery.generated.h"

UENUM(BlueprintType, Flags)
enum class EMorProcGenBlockingQuery : uint8 {
    None,
    Rocks,
    Deco = 8,
};

