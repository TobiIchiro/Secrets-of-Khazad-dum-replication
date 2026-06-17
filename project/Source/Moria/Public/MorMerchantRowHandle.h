#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorMerchantRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMerchantRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorMerchantRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorMerchantRowHandle) { return 0; }

