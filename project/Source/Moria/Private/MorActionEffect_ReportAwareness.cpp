#include "MorActionEffect_ReportAwareness.h"

UMorActionEffect_ReportAwareness::UMorActionEffect_ReportAwareness() {
    this->RequestInterval = -1.00f;
    this->MinimumTimeSinceLastAwarenessEvent = -1.00f;
    this->AwarenessEventType = EMorAIHordeAwarenessEventType::OrcCampScout;
    this->bPingAllLairSpawns = true;
    this->bPingNearbyCharacters = false;
    this->PingNearbyCharactersRadius = 1000.00f;
    this->AwarenessLevel = EFGKAIAwarenessLevel::Full;
    this->bAlertSpawningLair = true;
}

void UMorActionEffect_ReportAwareness::ReportAwarenessEvent(AActor* Actor) {
}


