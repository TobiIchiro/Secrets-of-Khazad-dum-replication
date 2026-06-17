#pragma once
#include "CoreMinimal.h"
#include "EFGKCosmeticEquipSlot.generated.h"

UENUM(BlueprintType)
enum class EFGKCosmeticEquipSlot : uint8 {
    None,
    CosmeticHat,
    CosmeticChest,
    CosmeticGloves,
    CosmeticLegs,
    First = CosmeticHat,
    Last = CosmeticLegs,
    Count = CosmeticLegs,
};

