#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorWeaponRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWeaponRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorWeaponRowHandle();
};

