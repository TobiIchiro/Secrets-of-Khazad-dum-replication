#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDamageModifierRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDamageModifierRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDamageModifierRowHandle();
};

