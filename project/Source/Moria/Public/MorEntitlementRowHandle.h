#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorEntitlementRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorEntitlementRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorEntitlementRowHandle();
};

