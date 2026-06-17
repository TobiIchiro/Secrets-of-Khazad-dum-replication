#pragma once
#include "CoreMinimal.h"
#include "EEquipOverrideType.generated.h"

UENUM(BlueprintType)
enum class EEquipOverrideType : uint8 {
    None,
    HidePrimary,
    HideOffHand,
    HideAllHand,
};

