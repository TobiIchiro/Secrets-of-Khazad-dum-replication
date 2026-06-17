#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorFloraReceptacleRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFloraReceptacleRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorFloraReceptacleRowHandle();
};

