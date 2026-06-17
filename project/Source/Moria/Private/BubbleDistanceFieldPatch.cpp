#include "BubbleDistanceFieldPatch.h"

FBubbleDistanceFieldPatch::FBubbleDistanceFieldPatch() {
    this->bOverrideOreVeinDifficulty = false;
    this->OreVeinDifficultyOverride = EMDifficulty::None;
    this->MineralIndex = 0;
    this->bCannotAllocateResources = false;
}

