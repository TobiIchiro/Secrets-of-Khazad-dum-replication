#pragma once
#include "CoreMinimal.h"
#include "ECellContents.generated.h"

UENUM(BlueprintType)
enum class ECellContents : uint8 {
    Uninitialized,
    Empty,
    Passage,
    Bubble,
    Landmark,
};

