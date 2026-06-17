#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorExpeditionModifierRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionModifierRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorExpeditionModifierRowHandle();
};

