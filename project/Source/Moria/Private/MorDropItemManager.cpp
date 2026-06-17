#include "MorDropItemManager.h"

AMorDropItemManager::AMorDropItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpawnLimit = 500;
    this->NonTrivialDropsLimit = 300;
    this->NarrativeImportantDropsLimit = 100;
    this->UpdateNumPerFrame = 100;
}


