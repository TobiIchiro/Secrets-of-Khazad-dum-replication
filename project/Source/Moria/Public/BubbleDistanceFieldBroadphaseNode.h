#pragma once
#include "CoreMinimal.h"
#include "BubbleDistanceFieldBroadphaseNode.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBubbleDistanceFieldBroadphaseNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> PatchIndices;
    
    FBubbleDistanceFieldBroadphaseNode();
};

