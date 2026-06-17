#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorContainerItemRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorContainerItemRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorContainerItemRowHandle();
};

