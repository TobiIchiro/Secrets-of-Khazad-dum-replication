#pragma once
#include "CoreMinimal.h"
#include "EMorSaveGameType.generated.h"

UENUM(BlueprintType)
enum class EMorSaveGameType : uint8 {
    MorSaveGame,
    MorWorldSaveGame,
    MorCharacterSaveGame,
    MorAccountSaveGame,
    MAX,
};

