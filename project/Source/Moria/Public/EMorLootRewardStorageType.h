#pragma once
#include "CoreMinimal.h"
#include "EMorLootRewardStorageType.generated.h"

UENUM(BlueprintType)
enum class EMorLootRewardStorageType : uint8 {
    DropOnGround,
    StoreInPlayerInventory,
    StoreInOwnInventory,
};

