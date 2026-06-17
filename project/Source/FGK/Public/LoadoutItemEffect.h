#pragma once
#include "CoreMinimal.h"
#include "LoadoutItemEffect.generated.h"

class UItemEffect;

USTRUCT(BlueprintType)
struct FGK_API FLoadoutItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FLoadoutItemEffect();
};

