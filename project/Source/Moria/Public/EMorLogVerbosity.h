#pragma once
#include "CoreMinimal.h"
#include "EMorLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EMorLogVerbosity : uint8 {
    NoLogging,
    Error,
    Warning,
    Log,
    Verbose,
    VeryVerbose,
    Summary,
};

