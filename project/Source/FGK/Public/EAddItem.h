#pragma once
#include "CoreMinimal.h"
#include "EAddItem.generated.h"

UENUM(BlueprintType)
enum class EAddItem : uint8 {
    Normal,
    Create,
    Silent,
    Equip = 4,
    ReplaceContainer = 8,
};

