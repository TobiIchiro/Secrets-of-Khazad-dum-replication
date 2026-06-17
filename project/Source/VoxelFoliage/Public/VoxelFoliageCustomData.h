#pragma once
#include "CoreMinimal.h"
#include "EVoxelUVAxis.h"
#include "VoxelGeneratorOutputPicker.h"
#include "VoxelGeneratorPicker.h"
#include "EVoxelFoliageCustomDataType.h"
#include "VoxelFoliageCustomData.generated.h"

USTRUCT(BlueprintType)
struct FVoxelFoliageCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelFoliageCustomDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMainGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker CustomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorOutputPicker ColorGeneratorOutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorOutputPicker FloatGeneratorOutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelUVAxis UVAxis;
    
    VOXELFOLIAGE_API FVoxelFoliageCustomData();
};

