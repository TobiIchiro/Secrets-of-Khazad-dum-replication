#pragma once
#include "CoreMinimal.h"
#include "EMorProgressRowNumberCompareType.h"
#include "MorProgressRowHandle.h"
#include "MorProgressRowCondition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProgressRowCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorProgressRowNumberCompareType CompareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompareValue;
    
    FMorProgressRowCondition();
};

