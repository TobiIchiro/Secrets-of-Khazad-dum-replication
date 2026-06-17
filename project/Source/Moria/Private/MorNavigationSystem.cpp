#include "MorNavigationSystem.h"

UMorNavigationSystem::UMorNavigationSystem() {
    this->SupportedAgents.AddDefaulted(3);
    this->MaxVerificationsPerTick = 100;
    this->MaxEdgesExtractedPerTick = 100;
    this->MaxHorizontalTracesPerTick = 500;
    this->MaxVerticalTracesPerTick = 500;
    this->MaxEdgePairTracesPerTick = 300;
    this->MaxEntryPointCheckedPerTick = 100;
    this->MaxJumpLinksGeneratedPerTick = 100;
    this->PercentageOfInvalidLinksToTriggerRebuild = 50;
    this->MinGenerationDelay = 1.00f;
    this->MaxGenerationDelay = 5.00f;
    this->MorWorldLayout = NULL;
}


