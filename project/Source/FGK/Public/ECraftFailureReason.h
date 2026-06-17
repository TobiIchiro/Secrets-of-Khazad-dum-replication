#pragma once
#include "CoreMinimal.h"
#include "ECraftFailureReason.generated.h"

UENUM(BlueprintType)
enum class ECraftFailureReason : uint8 {
    None,
    NotEnoughMaterials,
    MissingRequiredTools,
    OutputDestinationOccupied,
    MissingRequiredStructures,
    CraftInProgress,
    SystemFailure,
    WrongProcess,
    MissingStationRequirements,
    IncompatibleRecipe,
    RecipeNotDiscovered,
    NpcOnlyRecipe,
};

