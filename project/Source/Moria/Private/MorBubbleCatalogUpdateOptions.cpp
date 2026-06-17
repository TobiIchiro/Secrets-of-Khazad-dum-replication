#include "MorBubbleCatalogUpdateOptions.h"

FMorBubbleCatalogUpdateOptions::FMorBubbleCatalogUpdateOptions() {
    this->bAddNeededBIAs = false;
    this->bReport = false;
    this->bUpdateArchitectureCatalog = false;
    this->bUpdateBreakableCatalog = false;
    this->bUpdateChallengeCatalog = false;
    this->bUpdatePrefabs = false;
    this->bCanModifyPrefabs = false;
    this->bOnlyProcessNewBubbles = false;
    this->BubbleCatalogUpdateMode = EMorBubbleCatalogUpdateMode::FullUpdate;
    this->TemporaryAssetsParent = NULL;
}

