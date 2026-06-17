#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterialFiveWayBlend.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterialFiveWayBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> LockedChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFourWayBlend;
    
    VOXEL_API FVoxelPaintMaterialFiveWayBlend();
};

