#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCRoleRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCRoleRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCRoleRowHandle();
};

