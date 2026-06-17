#pragma once
#include "CoreMinimal.h"
#include "EFGKInventoryComponentFlags.generated.h"

UENUM(BlueprintType)
enum class EFGKInventoryComponentFlags : uint8 {
    None,
    EarthquakeIgnoreSaveDataOnRestore,
    AllocatedByContainerProxy,
    NonOreMainPassContainerProxy = 4,
};

