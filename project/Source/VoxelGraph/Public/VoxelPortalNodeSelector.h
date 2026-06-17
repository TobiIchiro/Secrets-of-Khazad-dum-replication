#pragma once
#include "CoreMinimal.h"
#include "VoxelPortalNodeSelector.generated.h"

class UVoxelLocalVariableDeclaration;

USTRUCT(BlueprintType)
struct VOXELGRAPH_API FVoxelPortalNodeSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVoxelLocalVariableDeclaration> Input;
    
    FVoxelPortalNodeSelector();
};

