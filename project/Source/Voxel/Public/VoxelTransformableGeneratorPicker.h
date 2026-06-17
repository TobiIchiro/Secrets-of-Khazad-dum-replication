#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorPickerType.h"
#include "Templates/SubclassOf.h"
#include "VoxelTransformableGeneratorPicker.generated.h"

class UVoxelTransformableGenerator;

USTRUCT(BlueprintType)
struct FVoxelTransformableGeneratorPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelGeneratorPickerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVoxelTransformableGenerator> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelTransformableGenerator* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> Parameters;
    
    VOXEL_API FVoxelTransformableGeneratorPicker();
};

