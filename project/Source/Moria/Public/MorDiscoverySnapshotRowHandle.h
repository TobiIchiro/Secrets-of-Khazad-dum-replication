#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDiscoverySnapshotRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDiscoverySnapshotRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDiscoverySnapshotRowHandle();
};

