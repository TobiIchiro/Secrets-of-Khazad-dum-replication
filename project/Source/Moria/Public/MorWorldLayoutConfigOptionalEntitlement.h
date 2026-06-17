#pragma once
#include "CoreMinimal.h"
#include "MorWorldLayoutConfigOptionalEntitlement.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutConfigOptionalEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntitlementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FMorWorldLayoutConfigOptionalEntitlement();
};

