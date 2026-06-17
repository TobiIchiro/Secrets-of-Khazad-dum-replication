#pragma once
#include "CoreMinimal.h"
#include "EMorEquipSlot.generated.h"

UENUM(BlueprintType)
enum class EMorEquipSlot : uint8 {
    MainHand,
    OffHand,
    BothHands,
    Ammo,
    EpicPack,
    Helmet,
    Torso,
    Gloves,
    Boots,
};

