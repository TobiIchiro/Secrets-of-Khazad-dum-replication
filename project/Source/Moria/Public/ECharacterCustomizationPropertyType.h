#pragma once
#include "CoreMinimal.h"
#include "ECharacterCustomizationPropertyType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCustomizationPropertyType : uint8 {
    Body,
    SkinColor,
    Head,
    Scar,
    Tattoo,
    TattooColor,
    EyeColor,
    Beard,
    BeardHairColor,
    BeardDecorationColor,
    HeadHair,
    HeadHairColor,
    HeadHairDecorationColor,
    Origin,
    Craft,
    CraftHat,
    CraftChest,
    CraftGloves,
    CraftLegs,
    Backpack,
    BackpackColor,
    Personality,
    Voice,
};

