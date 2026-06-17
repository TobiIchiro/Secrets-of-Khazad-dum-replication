#include "MorSingingManager.h"
#include "Components/SceneComponent.h"
#include "MorSongJukeboxComponent.h"
#include "Net/UnrealNetwork.h"

AMorSingingManager::AMorSingingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->VoicePartRtpc = NULL;
    this->SingingLeadSoloRtpc = NULL;
    this->bUseAnimationSync = false;
    this->bVoiceLineStopsOtherLines = true;
    this->Root = (USceneComponent*)RootComponent;
    this->Jukebox = CreateDefaultSubobject<UMorSongJukeboxComponent>(TEXT("Jukebox"));
    this->AmbientVoiceClass = NULL;
    this->SectionSwitchHumming = NULL;
    this->bEnableLateJoin = false;
    this->SongPauseScopeType = EMorGamePauseScopeType::AudioSync;
    this->EnableSyncTrack = 0;
    this->AudibleSyncTrack = 0;
    this->SyncTrack = NULL;
    this->UserCueEntry = TEXT("Entry");
    this->UserCueCompleted = TEXT("Completed");
    this->MiningSongSyncHandler = NULL;
    this->bUseMiningSongSync = false;
    this->bEnableLogging = false;
}

void AMorSingingManager::SpawnMiningSyncSound_Implementation(const FHitResult& OutHit, UAkAudioEvent* Sound, float StartTime, uint8 SongID) {
}

void AMorSingingManager::SetSongLocation(const FVector& SongLocation, const uint8 SongID) {
}

void AMorSingingManager::OnRep_UpdateVoices() {
}

void AMorSingingManager::MusicCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AMorSingingManager::MulticastStopSong_Implementation(bool bIsAborted, const uint8 SongID) {
}

void AMorSingingManager::MulticastStartSong_Implementation(UVoiceComponent* TargetComponent, const FName SongDefName, const uint8 SectionIndex, EMusicState InitialState, const uint8 UniqueId, UVoiceComponent* Leader, const AActor* SourceActor) {
}

void AMorSingingManager::MulticastSetState_Implementation(UVoiceComponent* TargetComponent, EMusicState NewState, const uint8 UniqueId) {
}

void AMorSingingManager::MulticastSetPart_Implementation(UVoiceComponent* TargetComponent, int8 NewPart, EMusicState NewState, const uint8 UniqueId) {
}

void AMorSingingManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorSingingManager, Voices);
}


