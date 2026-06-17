#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKDamageScale.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FGK_API FFGKDamageScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyHealthScale;
    
    FFGKDamageScale();
};

