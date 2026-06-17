#pragma once
#include "CoreMinimal.h"
#include "FGKMantleParams.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFGKMantleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    FGK_API FFGKMantleParams();
};

