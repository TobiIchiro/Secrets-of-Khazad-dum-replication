#pragma once
#include "CoreMinimal.h"
#include "ProcVoxelRegion.h"
#include "ProcVoxelRegionSphere.generated.h"

UCLASS(Blueprintable)
class MORIA_API AProcVoxelRegionSphere : public AProcVoxelRegion {
    GENERATED_BODY()
public:
    AProcVoxelRegionSphere(const FObjectInitializer& ObjectInitializer);

};

