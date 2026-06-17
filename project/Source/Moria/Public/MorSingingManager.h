#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EMorGamePauseScopeType.h"
#include "EMusicState.h"
#include "MorGamePauseScopeDescription.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectNative.h"
#include "MorSingingPart.h"
#include "MorSingingVoice.h"
#include "MorSongInstanceData.h"
#include "MorVoiceData.h"
#include "MusicEventSignaturetDelegate.h"
#include "SongEndSignaturetDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorSingingManager.generated.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UAkRtpc;
class UAkSwitchValue;
class UMorMiningSongSyncHandler;
class UMorSongJukeboxComponent;
class USceneComponent;
class UVoiceComponent;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorSingingManager : public AMorReplicatedManager, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VoicePartRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SingingLeadSoloRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkRtpc*> SingingBusMeterPerPartRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceLineStopsOtherLines;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicEventSignaturet OnMusicBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicEventSignaturet OnMusicBar;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicEventSignaturet OnMusicEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicEventSignaturet OnMusicCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSongEndSignaturet OnSongEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorSongJukeboxComponent* Jukebox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSingingVoice> MusicVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSingingPart> PartSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AmbientVoiceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SectionSwitchHumming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> SectionSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLateJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGamePauseScopeType SongPauseScopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGamePauseScopeDescription SongPauseScopeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableSyncTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudibleSyncTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SyncTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserCueEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserCueCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorMiningSongSyncHandler* MiningSongSyncHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMiningSongSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLogging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FMorSongInstanceData> CurrentSongs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateVoices, meta=(AllowPrivateAccess=true))
    TArray<FMorVoiceData> Voices;
    
public:
    AMorSingingManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnMiningSyncSound(const FHitResult& OutHit, UAkAudioEvent* Sound, float StartTime, uint8 SongID);
    
    UFUNCTION(BlueprintCallable)
    void SetSongLocation(const FVector& SongLocation, const uint8 SongID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateVoices();
    
private:
    UFUNCTION(BlueprintCallable)
    void MusicCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopSong(bool bIsAborted, const uint8 SongID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartSong(UVoiceComponent* TargetComponent, const FName SongDefName, const uint8 SectionIndex, EMusicState InitialState, const uint8 UniqueId, UVoiceComponent* Leader, const AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetState(UVoiceComponent* TargetComponent, EMusicState NewState, const uint8 UniqueId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetPart(UVoiceComponent* TargetComponent, int8 NewPart, EMusicState NewState, const uint8 UniqueId);
    

    // Fix for true pure virtual functions not being implemented
};

