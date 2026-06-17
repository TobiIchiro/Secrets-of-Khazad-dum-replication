#pragma once
#include "CoreMinimal.h"
#include "ECustomizationTable.generated.h"

UENUM(BlueprintType)
enum class ECustomizationTable : uint8 {
    HeadMeshes,
    BeardMeshes,
    HairMeshes,
    BodyMeshes,
    BackpackMeshes,
    ScarTextures,
    TattooTextures,
    HairColors,
    SkinColors,
    EyeColors,
    TattooColors,
    DecorationColors,
    BackpackColors,
    Origins,
    Crafts,
    CraftHats,
    CraftChests,
    CraftGloves,
    CraftLegs,
    Personalities,
    Voices,
    Presets,
};

