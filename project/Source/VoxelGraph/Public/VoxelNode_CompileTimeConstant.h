#pragma once
#include "CoreMinimal.h"
#include "EVoxelPinCategory.h"
#include "VoxelNodeHelper.h"
#include "VoxelNode_CompileTimeConstant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CompileTimeConstant : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelPinCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> Constants;
    
    UVoxelNode_CompileTimeConstant();

};

