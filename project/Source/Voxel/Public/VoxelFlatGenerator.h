#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelFlatGeneratorDataItemConfig.h"
#include "VoxelGenerator.h"
#include "VoxelFlatGenerator.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelFlatGenerator : public UVoxelGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelFlatGeneratorDataItemConfig> DataItemConfigs;
    
    UVoxelFlatGenerator();

};

