#pragma once
#include "CoreMinimal.h"
#include "EEquipMode.generated.h"

UENUM(BlueprintType)
enum class EEquipMode : uint8 {
    Unequipped,
    Holstered,
    Equipped,
    Held,
    Dropped,
};

