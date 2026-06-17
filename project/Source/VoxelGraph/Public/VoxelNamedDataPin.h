#pragma once
#include "CoreMinimal.h"
#include "EVoxelDataPinCategory.h"
#include "VoxelNamedDataPin.generated.h"

USTRUCT(BlueprintType)
struct FVoxelNamedDataPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelDataPinCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    VOXELGRAPH_API FVoxelNamedDataPin();
};

