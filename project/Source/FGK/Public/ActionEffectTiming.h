#pragma once
#include "CoreMinimal.h"
#include "EActionEffectTiming.h"
#include "ActionEffectTiming.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FActionEffectTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionEffectTiming Timing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WhichWindow;
    
    FActionEffectTiming();
};

