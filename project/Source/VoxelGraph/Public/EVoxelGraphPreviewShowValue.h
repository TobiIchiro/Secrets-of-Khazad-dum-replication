#pragma once
#include "CoreMinimal.h"
#include "EVoxelGraphPreviewShowValue.generated.h"

UENUM(BlueprintType)
enum class EVoxelGraphPreviewShowValue : uint8 {
    ShowValue,
    ShowRange,
    ShowValueAndRange,
};

