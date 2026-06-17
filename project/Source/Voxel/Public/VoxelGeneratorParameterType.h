#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorParameterContainerType.h"
#include "VoxelGeneratorParameterTerminalType.h"
#include "VoxelGeneratorParameterType.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelGeneratorParameterType : public FVoxelGeneratorParameterTerminalType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelGeneratorParameterContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorParameterTerminalType ValueType;
    
    FVoxelGeneratorParameterType();
};

