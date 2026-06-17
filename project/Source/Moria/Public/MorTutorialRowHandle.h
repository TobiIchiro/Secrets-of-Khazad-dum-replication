#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorTutorialRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTutorialRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorTutorialRowHandle();
};

