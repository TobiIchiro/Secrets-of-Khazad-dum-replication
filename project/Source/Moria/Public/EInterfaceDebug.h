#pragma once
#include "CoreMinimal.h"
#include "EInterfaceDebug.generated.h"

UENUM(BlueprintType)
enum class EInterfaceDebug : uint8 {
    Normal,
    DebugChooseInterface,
    DebugChooseOtherInterface,
    DebugHideInterface,
};

