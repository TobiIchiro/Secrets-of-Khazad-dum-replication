#pragma once
#include "CoreMinimal.h"
#include "EWorldElementType.generated.h"

UENUM(BlueprintType)
enum class EWorldElementType : uint8 {
    Lock,
    Key,
    Resource,
    Monster,
    Collectible,
    Challenge,
};

