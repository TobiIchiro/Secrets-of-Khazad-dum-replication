#include "MorDiscoverySnapshotDefinition.h"

FMorDiscoverySnapshotDefinition::FMorDiscoverySnapshotDefinition() {
    this->bIncludeInFutureRows = false;
    this->bAllConstructionsDiscovered = false;
    this->bAllItemsDiscovered = false;
    this->bAllConstructionRecipesDiscovered = false;
    this->bAllItemRecipesDiscovered = false;
    this->bAllRuneRecipesDiscovered = false;
    this->bDiscoverRecipeDependencies = false;
    this->bAllLoreDiscovered = false;
}

