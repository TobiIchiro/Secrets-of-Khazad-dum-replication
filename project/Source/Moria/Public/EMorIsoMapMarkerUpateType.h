#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapMarkerUpateType.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapMarkerUpateType : uint8 {
    Added,
    Removed,
    Changed,
};

