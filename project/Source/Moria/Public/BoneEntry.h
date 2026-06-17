#pragma once
#include "CoreMinimal.h"
#include "BoneEntry.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBoneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BoneWeight;
    
    FBoneEntry();
};

