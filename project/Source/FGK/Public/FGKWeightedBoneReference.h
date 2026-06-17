#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "FGKWeightedBoneReference.generated.h"

USTRUCT(BlueprintType)
struct FFGKWeightedBoneReference : public FBoneReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FGK_API FFGKWeightedBoneReference();
};

