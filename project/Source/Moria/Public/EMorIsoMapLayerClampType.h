#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapLayerClampType.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapLayerClampType : uint8 {
    None,
    FullChapter,
    DiscoveredChapter,
};

