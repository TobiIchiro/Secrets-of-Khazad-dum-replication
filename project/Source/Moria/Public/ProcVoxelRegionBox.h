#pragma once
#include "CoreMinimal.h"
#include "ProcVoxelRegion.h"
#include "ProcVoxelRegionBox.generated.h"

UCLASS(Blueprintable)
class MORIA_API AProcVoxelRegionBox : public AProcVoxelRegion {
    GENERATED_BODY()
public:
    AProcVoxelRegionBox(const FObjectInitializer& ObjectInitializer);

};

