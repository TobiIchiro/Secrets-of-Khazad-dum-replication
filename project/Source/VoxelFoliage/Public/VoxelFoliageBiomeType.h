#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGeneratorOutputPicker.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelFoliageBiomeTypeEntry.h"
#include "VoxelFoliageBiomeType.generated.h"

UCLASS(Blueprintable)
class VOXELFOLIAGE_API UVoxelFoliageBiomeType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker OutputPickerGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorOutputPicker BiomeOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelFoliageBiomeTypeEntry> Entries;
    
    UVoxelFoliageBiomeType();

};

