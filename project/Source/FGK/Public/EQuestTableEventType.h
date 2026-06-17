#pragma once
#include "CoreMinimal.h"
#include "EQuestTableEventType.generated.h"

UENUM(BlueprintType)
enum class EQuestTableEventType : uint8 {
    Load,
    Unload,
};

