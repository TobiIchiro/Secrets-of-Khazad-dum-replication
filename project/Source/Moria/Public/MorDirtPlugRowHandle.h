#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDirtPlugRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDirtPlugRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDirtPlugRowHandle();
};

