#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorRecipeBundleRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeBundleRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorRecipeBundleRowHandle();
};

