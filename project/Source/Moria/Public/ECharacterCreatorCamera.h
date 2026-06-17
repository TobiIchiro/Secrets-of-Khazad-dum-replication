#pragma once
#include "CoreMinimal.h"
#include "ECharacterCreatorCamera.generated.h"

UENUM(BlueprintType)
enum class ECharacterCreatorCamera : uint8 {
    CharacterCreatorCamera_Default,
    CharacterCreatorCamera_Head,
    CharacterCreatorCamera_WorldSelection,
    CharacterCreatorCamera_Body,
};

