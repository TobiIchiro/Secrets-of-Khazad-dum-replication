#include "MorSingleBubbleInstancerUserSettings.h"

UMorSingleBubbleInstancerUserSettings::UMorSingleBubbleInstancerUserSettings() {
    this->bAutoActivate = true;
    this->bUpdateBubbleCatalog = true;
    this->SeedType = EMorSingleBubbleInstancerSeedType::Default;
    this->CustomSeed = 0;
}


