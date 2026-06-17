#pragma once
#include "CoreMinimal.h"
#include "EMorSystemMessageBoxResult.generated.h"

UENUM(BlueprintType)
enum class EMorSystemMessageBoxResult : uint8 {
    No,
    Yes,
    Cancel,
    Ok,
};

