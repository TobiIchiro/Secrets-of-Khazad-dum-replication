#pragma once
#include "CoreMinimal.h"
#include "EOptionHandlerState.generated.h"

UENUM(BlueprintType)
enum class EOptionHandlerState : uint8 {
    Options_Unchanged,
    Options_Dirty,
    Options_Saved,
};

