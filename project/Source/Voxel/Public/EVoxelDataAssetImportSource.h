#pragma once
#include "CoreMinimal.h"
#include "EVoxelDataAssetImportSource.generated.h"

UENUM()
enum class EVoxelDataAssetImportSource : int32 {
    None,
    MagicaVox,
    RawVox,
    Mesh,
};

