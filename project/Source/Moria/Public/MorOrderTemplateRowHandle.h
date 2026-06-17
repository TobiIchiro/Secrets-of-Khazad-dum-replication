#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOrderTemplateRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOrderTemplateRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOrderTemplateRowHandle();
};

