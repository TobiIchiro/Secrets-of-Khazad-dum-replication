#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapPanClampBounds.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapPanClampBounds : uint8 {
    WorldlayoutBounds,
    LayerBounds,
    DiscoveredLayerBounds,
};

