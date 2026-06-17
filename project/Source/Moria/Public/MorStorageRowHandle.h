#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorStorageRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorStorageRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorStorageRowHandle();
};

