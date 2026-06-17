#pragma once
#include "CoreMinimal.h"
#include "EHeightMode.generated.h"

UENUM(BlueprintType)
enum class EHeightMode : uint8 {
    Random,
    FollowActor,
    FollowLandscape,
    AlignToTerrain,
    EmbedInTerrain,
};

