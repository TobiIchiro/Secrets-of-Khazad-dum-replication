#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorChapterRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChapterRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorChapterRowHandle();
};

