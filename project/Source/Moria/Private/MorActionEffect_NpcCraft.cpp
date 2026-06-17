#include "MorActionEffect_NpcCraft.h"

UMorActionEffect_NpcCraft::UMorActionEffect_NpcCraft() {
    this->CraftType = ENpcCraftType::Cooking;
    this->bNpcFakeCraftTimeTrigger = false;
    this->CraftingStation = NULL;
    this->PlayerHungerThreshold = 50;
}


