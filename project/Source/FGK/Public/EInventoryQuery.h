#pragma once
#include "CoreMinimal.h"
#include "EInventoryQuery.generated.h"

UENUM(BlueprintType)
enum class EInventoryQuery : uint8 {
    Personal,
    Nearby,
    AttachedReceptacle,
    GlobalStorage,
    NearbyPlayers,
    AllPlayers,
    AllPlayersAndStorage,
    PersonalAttached,
};

