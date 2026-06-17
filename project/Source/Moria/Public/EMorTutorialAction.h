#pragma once
#include "CoreMinimal.h"
#include "EMorTutorialAction.generated.h"

UENUM(BlueprintType)
enum class EMorTutorialAction : uint8 {
    None,
    CollectItem,
    EnterCraftScreen,
    EnterMapScreen,
    EnterYellScreen,
    EnterQuickPlatformScreen,
    EnterBuildScreen,
    EnterBuildCraftingSection,
    EnterBuildMiningSection,
    EnterBuildBaseSection,
    EnterBuildArchitectureSection,
    CraftItem,
    EnterArea,
    BuildStructure,
    RepairStructure,
    AddFuel,
    Sleep,
    SetWaypoint,
    Yell,
    Throw,
    CookFood,
    EatFood,
    EquipItem,
    ClaimBedroll,
    EnterIronOreArea,
    EnterDirtPlugArea,
};

