#include "MorCharacterComponentReplicator.h"
#include "Net/UnrealNetwork.h"

UMorCharacterComponentReplicator::UMorCharacterComponentReplicator() {
    this->State = EMusicState::None;
    this->CurrentBasePersonality = NULL;
    this->Groove = 0.00f;
}

void UMorCharacterComponentReplicator::SetWorldTargets(TArray<AFGKWorldTargetingActor*>& InWorldTargets) {
}

void UMorCharacterComponentReplicator::SetVaultData(FFGKVaultData& InVaultData) {
}

void UMorCharacterComponentReplicator::SetState(const EMusicState& MusicState) {
}

void UMorCharacterComponentReplicator::SetMantleData(FFGKMantleData& InMantleData) {
}

void UMorCharacterComponentReplicator::SetGroove(float InGroove) {
}

void UMorCharacterComponentReplicator::SetForcedTargets(TArray<UFGKTargetableComponent*>& InForcedTargets) {
}

void UMorCharacterComponentReplicator::SetCustomizations(const FCharacterCustomizations& CustomizationsIn) {
}

void UMorCharacterComponentReplicator::SetCurrentBasePersonality(UPersonalityInfo* InCurrentBasePersonality) {
}

void UMorCharacterComponentReplicator::ServerTogglePersonalityInternal_Implementation() {
}

void UMorCharacterComponentReplicator::ServerToggleMusicInternal_Implementation() {
}

void UMorCharacterComponentReplicator::ServerStopMusicInternal_Implementation(bool bFinishedSuccessfully) {
}

void UMorCharacterComponentReplicator::ServerStartMusicInternal_Implementation(EMSongType SongType, EMusicState InitialState, const AActor* SourceActor, FMorSongRowHandle SpecificSong, uint8 SpecificSongSectionIndex) {
}

void UMorCharacterComponentReplicator::ServerStartEmoteInternal_Implementation(int32 EmoteIndex) {
}

void UMorCharacterComponentReplicator::ServerPostVoiceLineInternal_Implementation(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking) {
}

void UMorCharacterComponentReplicator::Server_TargetLockInternal_Implementation(bool bValue) {
}

void UMorCharacterComponentReplicator::Server_SetVaultDataInternal_Implementation(const FFGKVaultData& NewVaultData) {
}

void UMorCharacterComponentReplicator::Server_SetTargetPositionInternal_Implementation(int32 TargetIdx, FVector Position) {
}

void UMorCharacterComponentReplicator::Server_SetMantleDataInternal_Implementation(const FFGKMantleData& NewMantleData) {
}

void UMorCharacterComponentReplicator::Server_SetCustomizations_Implementation(const FCharacterCustomizations& CustomizationsIn) {
}

void UMorCharacterComponentReplicator::Server_ChangeTargetInternal_Implementation(UFGKTargetableComponent* NewTarget) {
}

void UMorCharacterComponentReplicator::OnRep_WorldTargets() {
}

void UMorCharacterComponentReplicator::OnRep_VaultData() {
}

void UMorCharacterComponentReplicator::OnRep_SetState(EMusicState BeforeState) {
}

void UMorCharacterComponentReplicator::OnRep_MantleData() {
}

void UMorCharacterComponentReplicator::OnRep_Groove() {
}

void UMorCharacterComponentReplicator::OnRep_ForcedTargets() {
}

void UMorCharacterComponentReplicator::OnRep_Customizations() {
}

void UMorCharacterComponentReplicator::OnRep_CurrentBasePersonality() {
}

void UMorCharacterComponentReplicator::MulticastStartVoiceLine_Implementation(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking) {
}

void UMorCharacterComponentReplicator::Multicast_TargetLockInternal_Implementation(bool bValue) {
}

void UMorCharacterComponentReplicator::Multicast_ChangeTargetInternal_Implementation(UFGKTargetableComponent* NewTarget) {
}

void UMorCharacterComponentReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorCharacterComponentReplicator, State);
    DOREPLIFETIME(UMorCharacterComponentReplicator, Customizations);
    DOREPLIFETIME(UMorCharacterComponentReplicator, CurrentBasePersonality);
    DOREPLIFETIME(UMorCharacterComponentReplicator, WorldTargets);
    DOREPLIFETIME(UMorCharacterComponentReplicator, ForcedTargets);
    DOREPLIFETIME(UMorCharacterComponentReplicator, MantleData);
    DOREPLIFETIME(UMorCharacterComponentReplicator, VaultData);
    DOREPLIFETIME(UMorCharacterComponentReplicator, Groove);
}


