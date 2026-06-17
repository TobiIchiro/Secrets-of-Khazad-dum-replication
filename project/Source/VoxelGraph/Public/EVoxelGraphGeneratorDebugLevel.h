#pragma once
#include "CoreMinimal.h"
#include "EVoxelGraphGeneratorDebugLevel.generated.h"

UENUM(BlueprintType)
enum class EVoxelGraphGeneratorDebugLevel : uint8 {
    BeforeMacroInlining,
    AfterMacroInlining,
    AfterBiomeMergeReplace,
    AfterSmartMinMaxReplace,
    BeforeFillFunctionSeparators,
    Output,
    Function,
    Axis,
};

