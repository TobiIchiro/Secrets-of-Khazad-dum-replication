#pragma once
#include "CoreMinimal.h"
#include "EMorSurface.generated.h"

UENUM(BlueprintType)
enum class EMorSurface : uint8 {
    Stone_Natural,
    Stone_Ceramic,
    Stone_Brick,
    Stone_Worked,
    Stone_Gem,
    Wood_Hardwood,
    Wood_Rotting,
    Wood_Heavy,
    Wood_TreeTrunk,
    Wood_Mushroom,
    Dirt_Basic,
    Dirt_Gravel,
    Dirt_Mud,
    Dirt_Sand,
    Dirt_Dung,
    Metal_Light,
    Metal_Heavy,
    Metal_Mithril,
    Metal_Chain,
    Flesh_Dwarf,
    Flesh_Orc,
    Flesh_Beast,
    Flesh_Troll,
    Flesh_Shadowdragon,
    Bone_Basic,
    Bone_Exoskeleton,
    Foliage_Basic,
    Glass_Basic,
    Cloth_Basic,
    Leather_Basic,
    Water_Basic,
    Flesh_Mammal,
    Num,
};

