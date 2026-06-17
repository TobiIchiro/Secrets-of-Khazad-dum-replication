#pragma once
#include "CoreMinimal.h"
#include "ESyncAnimDirection.generated.h"

UENUM(BlueprintType)
enum class ESyncAnimDirection : uint8 {
    Front,
    Left,
    Right,
    Back,
};

