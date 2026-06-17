#pragma once
#include "CoreMinimal.h"
#include "FStartTimeType.h"
#include "MorMontageStartTimeSettings.generated.h"

USTRUCT(BlueprintType)
struct FMorMontageStartTimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FStartTimeType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    MORIA_API FMorMontageStartTimeSettings();
};

