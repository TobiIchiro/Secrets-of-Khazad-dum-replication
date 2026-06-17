#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerActorSpawnType.generated.h"

UENUM(BlueprintType)
enum class EVoxelSpawnerActorSpawnType : uint8 {
    All,
    OnlyFloating,
};

