#pragma once
#include "CoreMinimal.h"
#include "EEquipmentRestriction.generated.h"

UENUM(BlueprintType)
enum class EEquipmentRestriction : uint8 {
    Unrestricted,
    OneHandOnly,
};

