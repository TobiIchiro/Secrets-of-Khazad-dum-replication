#pragma once
#include "CoreMinimal.h"
#include "EHitFromDirection.generated.h"

UENUM(BlueprintType)
enum class EHitFromDirection : uint8 {
    Front,
    Back,
    Left,
    Right,
};

