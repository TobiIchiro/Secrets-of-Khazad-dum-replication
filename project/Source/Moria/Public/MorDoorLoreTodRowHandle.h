#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDoorLoreTodRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDoorLoreTodRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDoorLoreTodRowHandle();
};

