#pragma once
#include "CoreMinimal.h"
#include "FGKLeanAmount.generated.h"

USTRUCT(BlueprintType)
struct FFGKLeanAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FB;
    
    FGK_API FFGKLeanAmount();
};

