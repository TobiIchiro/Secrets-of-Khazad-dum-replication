#pragma once
#include "CoreMinimal.h"
#include "EFGKNullRowHandleBehavior.generated.h"

UENUM(BlueprintType)
enum class EFGKNullRowHandleBehavior : uint8 {
    Ignore,
    Warning,
    Error,
};

