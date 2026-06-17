#pragma once
#include "CoreMinimal.h"
#include "EMorControllerPromptOptions.generated.h"

UENUM(BlueprintType)
enum class EMorControllerPromptOptions : uint8 {
    AUTO,
    OFF,
    ON,
    Count,
};

