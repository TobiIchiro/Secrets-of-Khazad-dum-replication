#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOreRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOreRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOreRowHandle();
};

