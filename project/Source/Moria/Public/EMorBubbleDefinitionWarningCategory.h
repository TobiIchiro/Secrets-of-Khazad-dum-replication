#pragma once
#include "CoreMinimal.h"
#include "EMorBubbleDefinitionWarningCategory.generated.h"

UENUM(BlueprintType)
enum class EMorBubbleDefinitionWarningCategory : uint8 {
    Info,
    Warning,
    Error,
};

