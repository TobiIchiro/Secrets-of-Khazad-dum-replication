#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "EMorGamePauseScopeType.h"
#include "EMorPauseActivationState.h"
#include "EMorPauseState.h"
#include "MorGamePauseScopeDescription.h"
#include "MorManager.h"
#include "MorPauseAudioEvent.h"
#include "MorPauseManager.generated.h"

class UAkCallbackInfo;
class UMorPauseGuiHandler;

UCLASS(Blueprintable)
class MORIA_API AMorPauseManager : public AMorManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTargetPauseChangedDynamic, EMorPauseState, TargetPauseState, float, PreviousStateDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPauseActivationChangedDynamic, EMorPauseActivationState, PauseActivation, float, PreviousStateDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDescriptionChangedDynamic, const FText&, NewDescription, const FText&, OldDescription);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetPauseChangedDynamic OnTargetPauseChangedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPauseActivationChangedDynamic OnPauseActivationChangedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescriptionChangedDynamic OnDescriptionChangedDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorPauseGuiHandler* GuiHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMakeReadyInMultiplayerGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPauseWithTimeDilation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEnginePause: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAudioSyncBlocksPause: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PausedTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToUnpause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDelayBetweenPauses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioSyncDelayBetweenPauses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGamePauseScopeDescription OnlineGamePauseBlockDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGamePauseScopeType LevelSequenceScopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGamePauseScopeDescription LevelSequenceScopeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorPauseAudioEvent> AudioEvents;
    
public:
    AMorPauseManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPauseEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorPauseState GetTargetPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorPauseActivationState GetPauseActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentStateDescription() const;
    
};

