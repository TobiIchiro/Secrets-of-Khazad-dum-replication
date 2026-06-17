#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorArmorRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArmorRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorArmorRowHandle();
};

