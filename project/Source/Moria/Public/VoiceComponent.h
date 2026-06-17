#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "Components/ActorComponent.h"
#include "FGKComponentWithReplicatorInterface.h"
#include "EMSongType.h"
#include "EMorVoiceSingingVolumeMode.h"
#include "EMusicState.h"
#include "MorSongRowHandle.h"
#include "MorVoiceLine.h"
#include "VoiceEventDelegate.h"
#include "VoiceComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAnimSequence;
class UPersonalityInfo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UVoiceComponent : public UActorComponent, public IFGKComponentWithReplicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceEvent OnVoiceLineStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceEvent OnVoiceLineEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetState, meta=(AllowPrivateAccess=true))
    EMusicState State;
    
public:
    UVoiceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopMusic(bool bFinishedSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void StartMusic(EMSongType SongType, EMusicState InitialState);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleMusicInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopMusicInternal(bool bFinishedSuccessfully);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartMusicInternal(EMSongType SongType, EMusicState InitialState, const AActor* SourceActor, FMorSongRowHandle SpecificSong, uint8 SpecificSongSectionIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPostVoiceLineInternal(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking);
    
public:
    UFUNCTION(BlueprintCallable)
    void PostVoiceLineLocally(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking);
    
    UFUNCTION(BlueprintCallable)
    void PostVoiceLine(const FMorVoiceLine& VoiceLine, bool bLocalOnly, bool bIsCharacterTalking);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVoiceLinePreloadComplete(TSoftObjectPtr<UAkAudioEvent> VoiceEvent, TSoftObjectPtr<UAnimSequence> LipSyncAnim);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetState(EMusicState BeforeState);
    
    UFUNCTION(BlueprintCallable)
    void OnPersonalityChanged(const UPersonalityInfo* PersonalityInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAkEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartVoiceLine(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking);
    
    UFUNCTION()
    void LocallyStartVoiceLine(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSinging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPriming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveVoiceLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSingingVolumeNormalized(const EMorVoiceSingingVolumeMode VolumeMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSingingVolumeDecibels(const EMorVoiceSingingVolumeMode VolumeMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimingProgress() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMouthOpenWidth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetAk() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVoiceLine(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSing() const;
    

    // Fix for true pure virtual functions not being implemented
};

