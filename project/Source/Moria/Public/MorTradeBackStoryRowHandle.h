#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorTradeBackStoryRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTradeBackStoryRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorTradeBackStoryRowHandle();
};

