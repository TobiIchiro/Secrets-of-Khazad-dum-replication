#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapPanSpace.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapPanSpace : uint8 {
    CellSpace,
    IsoSpace,
    IsoSpaceZoomed,
    ScreenSpace,
};

