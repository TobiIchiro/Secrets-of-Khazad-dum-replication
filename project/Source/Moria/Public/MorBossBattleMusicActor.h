#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMorBossBattleMusicState.h"
#include "MorBossBattleMusicActor.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorBossBattleMusicActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* MusicAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorBossBattleMusicState, UAkSwitchValue*> MusicSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EMorBossBattleMusicState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bMusicPlaying, meta=(AllowPrivateAccess=true))
    bool bMusicPlaying;
    
public:
    AMorBossBattleMusicActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopMusic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartMusic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMusicState(EMorBossBattleMusicState NewBossBattleState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bMusicPlaying();
    
};

