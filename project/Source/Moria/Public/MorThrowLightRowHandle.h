#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorThrowLightRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorThrowLightRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorThrowLightRowHandle();
};

