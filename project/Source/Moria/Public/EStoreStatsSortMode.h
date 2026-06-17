#pragma once
#include "CoreMinimal.h"
#include "EStoreStatsSortMode.generated.h"

UENUM(BlueprintType)
enum class EStoreStatsSortMode : uint8 {
    Count,
    TotalSize,
    MaxSize,
    MaxSaveGamePropertiesSize,
    MaxSaveGameSerializeSize,
};

