#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCTraitRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCTraitRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCTraitRowHandle();
};

