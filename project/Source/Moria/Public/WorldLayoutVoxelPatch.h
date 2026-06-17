#pragma once
#include "CoreMinimal.h"
#include "MorBubbleVoxelCapsule.h"
#include "WorldLayoutVoxelPatch.generated.h"

USTRUCT(BlueprintType)
struct FWorldLayoutVoxelPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorBubbleVoxelCapsule> OreVeins;
    
    MORIA_API FWorldLayoutVoxelPatch();
};

