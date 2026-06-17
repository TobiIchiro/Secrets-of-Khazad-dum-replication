#pragma once
#include "CoreMinimal.h"
#include "EMorSaveGameStatus.generated.h"

UENUM(BlueprintType)
enum class EMorSaveGameStatus : uint8 {
    Invalid,
    NewGame,
    SaveGame,
};

