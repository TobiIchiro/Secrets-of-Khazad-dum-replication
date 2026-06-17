#pragma once
#include "CoreMinimal.h"
#include "FGKCosmeticItemEffect.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKCosmeticItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EffectName;
    
    FFGKCosmeticItemEffect();
};

