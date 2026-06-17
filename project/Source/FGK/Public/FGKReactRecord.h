#pragma once
#include "CoreMinimal.h"
#include "FGKReactRecord.generated.h"

USTRUCT(BlueprintType)
struct FFGKReactRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastActiveTime;
    
    FGK_API FFGKReactRecord();
};

