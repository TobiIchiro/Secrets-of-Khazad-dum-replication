#pragma once
#include "CoreMinimal.h"
#include "MorEntitlementList.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorEntitlementList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EntitlementIDs;
    
    FMorEntitlementList();
};

