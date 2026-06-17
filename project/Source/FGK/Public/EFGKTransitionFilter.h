#pragma once
#include "CoreMinimal.h"
#include "EFGKTransitionFilter.generated.h"

UENUM(BlueprintType)
enum class EFGKTransitionFilter : uint8 {
    Whitelist,
    Blacklist,
    Entry,
    Global,
};

