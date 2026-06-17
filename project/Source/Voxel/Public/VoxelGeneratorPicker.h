#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorPickerType.h"
#include "Templates/SubclassOf.h"
#include "VoxelGeneratorPicker.generated.h"

class UVoxelGenerator;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelGeneratorPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelGeneratorPickerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVoxelGenerator> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelGenerator* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> Parameters;
    
    FVoxelGeneratorPicker();
};

