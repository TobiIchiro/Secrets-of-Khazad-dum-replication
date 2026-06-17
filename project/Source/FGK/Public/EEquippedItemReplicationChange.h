#pragma once
#include "CoreMinimal.h"
#include "EEquippedItemReplicationChange.generated.h"

UENUM(BlueprintType)
enum class EEquippedItemReplicationChange : uint8 {
    None,
    ItemAdded,
    ItemChanged,
    ItemRemoved,
};

