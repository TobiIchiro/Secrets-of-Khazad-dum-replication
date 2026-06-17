#pragma once
#include "CoreMinimal.h"
#include "EFGKDataValidationResult.generated.h"

UENUM(BlueprintType)
enum class EFGKDataValidationResult : uint8 {
    Success,
    Warning,
    Error,
};

