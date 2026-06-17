#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCSkillRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCSkillRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCSkillRowHandle();
};

