#pragma once
#include "CoreMinimal.h"
#include "EMorExpeditionModifierType.generated.h"

UENUM(BlueprintType)
enum class EMorExpeditionModifierType : uint8 {
    NONE,
    EnemyCountModifier,
    AddNewResource,
    AddNewEnemyType,
    NoiseModifier,
    SetChallengeDefinition,
    AddAiPatrols,
};

