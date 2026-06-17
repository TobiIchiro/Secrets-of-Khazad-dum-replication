#include "MorTipManager.h"

AMorTipManager::AMorTipManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeserializationTipComponent = NULL;
}

AMorTipManager* AMorTipManager::Get(UObject* WorldContext) {
    return NULL;
}


