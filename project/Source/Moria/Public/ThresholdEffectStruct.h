#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThresholdEffectStruct.generated.h"

USTRUCT(BlueprintType)
struct FThresholdEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilledPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaxReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeUpdatedAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeUpdatedDescending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath IncomingBrewEffectClass;
    
    MORIA_API FThresholdEffectStruct();
};

