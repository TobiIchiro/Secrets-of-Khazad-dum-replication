#pragma once
#include "CoreMinimal.h"
#include "EDirectionType.generated.h"

UENUM(BlueprintType)
enum class EDirectionType : uint8 {
    Forward,
    Left,
    Right,
    Back,
};

