#pragma once
#include "CoreMinimal.h"
#include "EBuildFailureReason.generated.h"

UENUM(BlueprintType)
enum class EBuildFailureReason : uint8 {
    NotEnoughMaterials,
    MissingRequiredStructures,
    BaseBuildOnly,
    SystemFailure,
    InstantOnly,
    PlannedOnly,
    InvalidPlacement,
    NoStability,
    NearSettlementStone,
    MonumentAlreadyPlaced,
    NearRavenConstruction,
};

