#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneTemplateRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneTemplateRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneTemplateRowHandle();
};

