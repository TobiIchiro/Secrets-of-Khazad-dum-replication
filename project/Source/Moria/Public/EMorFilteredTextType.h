#pragma once
#include "CoreMinimal.h"
#include "EMorFilteredTextType.generated.h"

UENUM(BlueprintType)
enum class EMorFilteredTextType : uint8 {
    Placeholder,
    Success,
    Failure,
};

