#pragma once
#include "CoreMinimal.h"
#include "EBroadphaseOperationType.h"
#include "BroadphaseOperation.generated.h"

class UWorldLayoutBubble;

USTRUCT(BlueprintType)
struct FBroadphaseOperation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBroadphaseOperationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldLayoutBubble* Bubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaximumBubbleLimit;
    
    MORIA_API FBroadphaseOperation();
};

