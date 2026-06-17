#pragma once
#include "CoreMinimal.h"
#include "EFGKBooleanFilter.generated.h"

UENUM(BlueprintType)
enum class EFGKBooleanFilter : uint8 {
    None,
    MustBeTrue,
    MustBeFalse,
};

