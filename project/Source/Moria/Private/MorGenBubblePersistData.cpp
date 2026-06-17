#include "MorGenBubblePersistData.h"

FMorGenBubblePersistData::FMorGenBubblePersistData() {
    this->Seed = 0;
    this->OreSeed = 0;
    this->DynamicArchitectureDealerSeed = 0;
    this->Contents = ECellContents::Uninitialized;
    this->PersistedVersion = 0;
    this->PersistedEarthquakeId = 0;
    this->bEarthquakePending = false;
    this->bFirstSetupFallbackContainerFinished = false;
}

