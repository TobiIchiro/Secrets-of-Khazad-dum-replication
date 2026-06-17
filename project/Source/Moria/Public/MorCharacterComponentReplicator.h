#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKComponentReplicator.h"
#include "FGKMantleData.h"
#include "FGKVaultData.h"
#include "CharacterCustomizations.h"
#include "EMSongType.h"
#include "EMusicState.h"
#include "MorSongRowHandle.h"
#include "MorVoiceLine.h"
#include "MorCharacterComponentReplicator.generated.h"

class AActor;
class AFGKWorldTargetingActor;
class UAkAudioEvent;
class UAnimSequence;
class UFGKTargetableComponent;
class UPersonalityInfo;

UCLASS(Blueprintable, Within=MorCharacter)
class MORIA_API UMorCharacterComponentReplicator : public UFGKComponentReplicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetState, meta=(AllowPrivateAccess=true))
    EMusicState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Customizations, meta=(AllowPrivateAccess=true))
    FCharacterCustomizations Customizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBasePersonality, meta=(AllowPrivateAccess=true))
    UPersonalityInfo* CurrentBasePersonality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldTargets, meta=(AllowPrivateAccess=true))
    TArray<AFGKWorldTargetingActor*> WorldTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_ForcedTargets, meta=(AllowPrivateAccess=true))
    TArray<UFGKTargetableComponent*> ForcedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MantleData, meta=(AllowPrivateAccess=true))
    FFGKMantleData MantleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VaultData, meta=(AllowPrivateAccess=true))
    FFGKVaultData VaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Groove, meta=(AllowPrivateAccess=true))
    float Groove;
    
    UMorCharacterComponentReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWorldTargets(TArray<AFGKWorldTargetingActor*>& InWorldTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetVaultData(FFGKVaultData& InVaultData);
    
    UFUNCTION(BlueprintCallable)
    void SetState(const EMusicState& MusicState);
    
    UFUNCTION(BlueprintCallable)
    void SetMantleData(FFGKMantleData& InMantleData);
    
    UFUNCTION(BlueprintCallable)
    void SetGroove(float InGroove);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedTargets(TArray<UFGKTargetableComponent*>& InForcedTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizations(const FCharacterCustomizations& CustomizationsIn);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBasePersonality(UPersonalityInfo* InCurrentBasePersonality);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTogglePersonalityInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleMusicInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopMusicInternal(bool bFinishedSuccessfully);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartMusicInternal(EMSongType SongType, EMusicState InitialState, const AActor* SourceActor, FMorSongRowHandle SpecificSong, uint8 SpecificSongSectionIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartEmoteInternal(int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPostVoiceLineInternal(const FMorVoiceLine& VoiceLine, bool bIsCharacterTalking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TargetLockInternal(bool bValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetVaultDataInternal(const FFGKVaultData& NewVaultData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetTargetPositionInternal(int32 TargetIdx, FVector Position);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMantleDataInternal(const FFGKMantleData& NewMantleData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCustomizations(const FCharacterCustomizations& CustomizationsIn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeTargetInternal(UFGKTargetableComponent* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldTargets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VaultData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetState(EMusicState BeforeState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MantleData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Groove();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ForcedTargets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Customizations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBasePersonality();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartVoiceLine(const TSoftObjectPtr<UAkAudioEvent>& VoiceEvent, const TSoftObjectPtr<UAnimSequence>& LipSyncAnim, float ServerTiming, const FText& VOText, const uint32 RandomSeed, bool bIsCharacterTalking);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TargetLockInternal(bool bValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeTargetInternal(UFGKTargetableComponent* NewTarget);
    
};

