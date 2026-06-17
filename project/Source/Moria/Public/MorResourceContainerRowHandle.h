#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorResourceContainerRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorResourceContainerRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorResourceContainerRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorResourceContainerRowHandle) { return 0; }

