#pragma once
#include "CoreMinimal.h"
#include "MorWorldLayoutConfigOptionalEntitlement.h"
#include "MorWorldLayoutConfigOptionalEntitlements.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutConfigOptionalEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorWorldLayoutConfigOptionalEntitlement> Entitlements;
    
    FMorWorldLayoutConfigOptionalEntitlements();
};

