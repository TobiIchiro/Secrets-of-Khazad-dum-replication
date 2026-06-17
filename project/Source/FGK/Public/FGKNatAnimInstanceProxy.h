#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "FGKNatAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKNatAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FFGKNatAnimInstanceProxy();
};

