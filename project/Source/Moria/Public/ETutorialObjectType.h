#pragma once
#include "CoreMinimal.h"
#include "ETutorialObjectType.generated.h"

UENUM(BlueprintType)
enum class ETutorialObjectType : uint8 {
    None,
    Item,
    Structure,
};

