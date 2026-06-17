#include "VoiceComponent.h"
#include "Net/UnrealNetwork.h"

UVoiceComponent::UVoiceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPlayerVoice = false;
    this->State = EMusicState::None;
}

void UVoiceComponent::StopMusic(bool bFinishedSuccessfully) {
}

void UVoiceComponent::StartMusic(EMSongType SongType, EMusicState InitialState) {
}

void UVoiceComponent::ServerToggleMusicInternal_Implementation() {
}

void UVoiceComponent::ServerStopMusicInternal_Implementation(bool bFinishedSuccessfully) {
}

void UVoiceComponent::ServerStartMusicInternal_Implementation(EMSongType SongType, EMusicState InitialState, const AActor* SourceActor, FMorSongRowHandle SpecificSong, uint8 SpecificSongSectionIndex) {
}

void UVoiceComponent::ServerPostVoiceLineInternal_Implementation(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking) {
}

void UVoiceComponent::PostVoiceLineLocally(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking) {
}

void UVoiceComponent::PostVoiceLine(const FMorVoiceLine& VoiceLine, bool bLocalOnly, bool bIsCharacterTalking) {
}

void UVoiceComponent::OnVoiceLinePreloadComplete(TSoftObjectPtr<UAkAudioEvent> VoiceEvent, TSoftObjectPtr<UAnimSequence> LipSyncAnim) {
}

void UVoiceComponent::OnRep_SetState(EMusicState BeforeState) {
}

void UVoiceComponent::OnPersonalityChanged(const UPersonalityInfo* PersonalityInfo) {
}

void UVoiceComponent::OnAkEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UVoiceComponent::MulticastStartVoiceLine_Implementation(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking) {
}

void UVoiceComponent::LocallyStartVoiceLine(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking) {
}

bool UVoiceComponent::IsSinging() const {
    return false;
}

bool UVoiceComponent::IsPriming() const {
    return false;
}

bool UVoiceComponent::IsLive() const {
    return false;
}

bool UVoiceComponent::HasActiveVoiceLine() const {
    return false;
}

float UVoiceComponent::GetSingingVolumeNormalized(const EMorVoiceSingingVolumeMode VolumeMode) const {
    return 0.0f;
}

float UVoiceComponent::GetSingingVolumeDecibels(const EMorVoiceSingingVolumeMode VolumeMode) const {
    return 0.0f;
}

float UVoiceComponent::GetPrimingProgress() const {
    return 0.0f;
}

float UVoiceComponent::GetMouthOpenWidth() {
    return 0.0f;
}

UAkComponent* UVoiceComponent::GetAk() const {
    return NULL;
}

void UVoiceComponent::EndVoiceLine(int32 PlayingID) {
}

bool UVoiceComponent::CanSing() const {
    return false;
}

void UVoiceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVoiceComponent, State);
}


