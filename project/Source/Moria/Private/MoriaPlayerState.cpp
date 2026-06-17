#include "MoriaPlayerState.h"
#include "Net/UnrealNetwork.h"

AMoriaPlayerState::AMoriaPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDoesZoneTrackAwareness = false;
    this->HordeState = EMorAIWaveEncounterState::None;
    this->bIsHordeActive = false;
    this->HordeAwarenessValue = 0.00f;
    this->HordeAwarenessThreshold = 0.00f;
    this->HordeChance = 0.00f;
    this->bIsSiegeActive = false;
}

void AMoriaPlayerState::OnRep_SiegeLocation() {
}

void AMoriaPlayerState::OnRep_HordeState(EMorAIWaveEncounterState OldState) {
}

void AMoriaPlayerState::OnRep_DoesZoneTrackAwareness() {
}

void AMoriaPlayerState::OnRep_bIsSiegeActive() {
}

bool AMoriaPlayerState::IsSiegeActive() const {
    return false;
}

bool AMoriaPlayerState::IsHordeActive() const {
    return false;
}

FVector AMoriaPlayerState::GetSiegeLocation() const {
    return FVector{};
}

FLinearColor AMoriaPlayerState::GetPlayerColor() const {
    return FLinearColor{};
}

float AMoriaPlayerState::GetHordeRollingAwarenessThreshold() const {
    return 0.0f;
}

float AMoriaPlayerState::GetHordeChance() const {
    return 0.0f;
}

float AMoriaPlayerState::GetHordeAwarenessValue() const {
    return 0.0f;
}

EMorAIWaveEncounterState AMoriaPlayerState::GetCurrentHordeState() const {
    return EMorAIWaveEncounterState::None;
}

bool AMoriaPlayerState::DoesZoneTrackAwareness() const {
    return false;
}

void AMoriaPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMoriaPlayerState, PlayerColor);
    DOREPLIFETIME(AMoriaPlayerState, bDoesZoneTrackAwareness);
    DOREPLIFETIME(AMoriaPlayerState, HordeState);
    DOREPLIFETIME(AMoriaPlayerState, bIsHordeActive);
    DOREPLIFETIME(AMoriaPlayerState, HordeAwarenessValue);
    DOREPLIFETIME(AMoriaPlayerState, HordeAwarenessThreshold);
    DOREPLIFETIME(AMoriaPlayerState, HordeChance);
    DOREPLIFETIME(AMoriaPlayerState, bIsSiegeActive);
    DOREPLIFETIME(AMoriaPlayerState, SiegeLocation);
}


