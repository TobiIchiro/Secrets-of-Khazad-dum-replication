#pragma once
#include "CoreMinimal.h"
#include "MorEntitlementDefinition.h"
#include "MorEntitlementRecord.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorEntitlementRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntitlementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementDefinition Definition;
    
    FMorEntitlementRecord();
};

