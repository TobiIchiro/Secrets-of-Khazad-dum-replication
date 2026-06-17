#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "VoxelGraphNodeInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXELGRAPH_API UVoxelGraphNodeInterface : public UEdGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InfoMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString WarningMsg;
    
    UVoxelGraphNodeInterface();

};

