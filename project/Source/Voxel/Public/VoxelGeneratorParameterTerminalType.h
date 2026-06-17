#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorParameterPropertyType.h"
#include "VoxelGeneratorParameterTerminalType.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelGeneratorParameterTerminalType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelGeneratorParameterPropertyType PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyClass;
    
    FVoxelGeneratorParameterTerminalType();
};

