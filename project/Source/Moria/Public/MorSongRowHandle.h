#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorSongRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSongRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorSongRowHandle();
};

