#pragma once
#include "CoreMinimal.h"
#include "EVoxelHeightmapImporterMaterialConfig.generated.h"

UENUM(BlueprintType)
enum class EVoxelHeightmapImporterMaterialConfig : uint8 {
    RGB,
    FourWayBlend,
    FiveWayBlend,
    SingleIndex,
    MultiIndex,
};

