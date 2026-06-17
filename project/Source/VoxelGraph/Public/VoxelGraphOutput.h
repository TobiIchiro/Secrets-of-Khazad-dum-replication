#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelDataPinCategory.h"
#include "VoxelGraphOutput.generated.h"

USTRUCT(BlueprintType)
struct FVoxelGraphOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelDataPinCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    VOXELGRAPH_API FVoxelGraphOutput();
};

