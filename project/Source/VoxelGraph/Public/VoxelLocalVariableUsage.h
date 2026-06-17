#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelLocalVariableBase.h"
#include "VoxelPortalNodeSelector.h"
#include "VoxelLocalVariableUsage.generated.h"

class UVoxelLocalVariableDeclaration;

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelLocalVariableUsage : public UVoxelLocalVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPortalNodeSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelLocalVariableDeclaration* Declaration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DeclarationGuid;
    
    UVoxelLocalVariableUsage();

};

