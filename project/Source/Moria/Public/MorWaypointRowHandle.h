#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorWaypointRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWaypointRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorWaypointRowHandle();
};

