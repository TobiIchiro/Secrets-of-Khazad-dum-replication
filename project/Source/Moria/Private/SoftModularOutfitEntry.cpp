#include "SoftModularOutfitEntry.h"

FSoftModularOutfitEntry::FSoftModularOutfitEntry() {
    this->TintMaterialIndex = 0;
    this->SubsurfaceProfileToOverrideForLight = NULL;
    this->SubsurfaceProfileToOverrideForDark = NULL;
    this->CustomHairFromLength = EHairLength::HairLength_Undefined;
}

