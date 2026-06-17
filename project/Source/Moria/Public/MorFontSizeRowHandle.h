#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorFontSizeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFontSizeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorFontSizeRowHandle();
};

