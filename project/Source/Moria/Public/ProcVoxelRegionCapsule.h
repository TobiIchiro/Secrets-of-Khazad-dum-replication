#pragma once
#include "CoreMinimal.h"
#include "ProcVoxelRegion.h"
#include "ProcVoxelRegionCapsule.generated.h"

UCLASS(Blueprintable)
class MORIA_API AProcVoxelRegionCapsule : public AProcVoxelRegion {
    GENERATED_BODY()
public:
    AProcVoxelRegionCapsule(const FObjectInitializer& ObjectInitializer);

};

